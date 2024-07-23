```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if rolls[roll_index] == 'X':
            if frame < 10:
                score += 30
                roll_index += 1
            else:
                score += 30 + int(rolls[roll_index+1])
                roll_index += 2
        elif '/' in rolls[roll_index:roll_index+3]:
            first, second = map(int, rolls[roll_index:roll_index+3].split('/'))
            if frame == 10:
                score += first + second
            else:
                score += first + (second - sum(map(int, rolls[roll_index+2:roll_index+4].split('/'))))
            roll_index += 3
        else:
            first = int(rolls[roll_index])
            if frame < 9 and rolls[roll_index+1] == 'X':
                score += 10 + (30 - first)
                roll_index += 2
            elif '/' in rolls[roll_index:roll_index+4]:
                second = sum(map(int, rolls[roll_index+1:roll_index+3].split('/')))
                score += first + second
                roll_index += 3
            else:
                score += first + int(rolls[roll_index+1])
                roll_index += 2
    return score