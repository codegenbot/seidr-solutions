```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(10):
        if rolls[roll_index] == 'X':
            score += 30
            roll_index += 1
        elif rolls[roll_index:roll_index+2].count('/'):
            left, right = map(int, rolls[roll_index:roll_index+2].split('/'))
            score += left + right
            roll_index += 2
        else:
            first_roll = int(rolls[roll_index])
            if frame < 9 and str(first_roll) + rolls[roll_index+1] == 'X5':
                score += 25
                roll_index += 2
            elif frame == 9 and rolls[roll_index+1] == 'X' and first_roll != 10:
                score += 15 + first_roll
                roll_index += 2
            else:
                score += first_roll
                roll_index += 1
    return score