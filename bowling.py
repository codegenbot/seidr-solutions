```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if rolls[roll_index] == 'X':
            if frame != 10:
                if rolls[roll_index + 1] == 'X' or (frame < 9 and rolls[roll_index+2] in '/'):
                    score += 30
                else:
                    score += 10 + int(rolls[roll_index + 1])
            else:
                score += 30
            roll_index += 1
        elif '/' in rolls[roll_index:roll_index+2]:
            first, second = map(int, rolls[roll_index:roll_index+2].split('/'))
            if frame < 9 and (rolls[roll_index + 1] == 'X' or rolls[roll_index + 2] in '/'):
                score += first + 10
            else:
                score += first + second
            roll_index += 2
        else:
            first = int(rolls[roll_index])
            if frame < 9 and (rolls[roll_index+1] == 'X' or rolls[roll_index+2] in '/'):
                score += 10 + first
            else:
                score += first + int(rolls[roll_index+1])
            roll_index += 2
    return score