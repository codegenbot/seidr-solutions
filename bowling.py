```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if rolls[roll_index] == 'X':
            score += 10
            roll_index += 1
        elif rolls[roll_index:roll_index+2].count('/'):
            parts = rolls[roll_index:roll_index+2].split('/')
            score += int(parts[0]) + int(parts[1])
            roll_index += 2
        else:
            first_roll = int(rolls[roll_index])
            if frame < 10 and rolls[roll_index+1] == 'X':
                score += 10
                roll_index += 1
            elif rolls[roll_index+1:roll_index+3].count('/'):
                parts = rolls[roll_index+1:roll_index+3].split('/')
                score += first_roll + int(parts[0]) + int(parts[1])
                roll_index += 3
            else:
                if first_roll == 10:
                    score += 10 + int(rolls[roll_index+2])
                    roll_index += 3
                else:
                    score += first_roll + int(rolls[roll_index+1])
                    roll_index += 2
    return score