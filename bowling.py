```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(10):
        if rolls[roll_index] == 'X':
            score += 30
            roll_index += 1
        elif rolls[roll_index:roll_index+2].count('/'):
            first, second = map(int, rolls[roll_index:roll_index+2].split('/'))
            score += first + second
            roll_index += 2
        else:
            first = int(rolls[roll_index])
            if frame < 8 and rolls[roll_index+1] == 'X':
                score += 10 + (30 - first)
                roll_index += 2
            elif rolls[roll_index:roll_index+2].count('/'):
                second = int(rolls[roll_index+1].split('/')[0])
                score += first + second
                roll_index += 2
            else:
                score += first + int(rolls[roll_index+1])
                roll_index += 2
    return score