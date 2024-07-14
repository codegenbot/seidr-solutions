```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1,11):
        if rolls[roll_index] == 'X':
            if len(rolls) - roll_index >= 2 and rolls[roll_index+1] == '/':
                score += 10 + int(rolls[roll_index+2])
                roll_index += 3
            else:
                score += 10
                roll_index += 1
        elif rolls[roll_index] != '/':
            first_roll = int(rolls[roll_index])
            if len(rolls) - roll_index >= 2 and rolls[roll_index+1] == '/':
                second_roll = 10 - first_roll
                score += first_roll + second_roll
                roll_index += 2
            else:
                score += first_roll + int(rolls[roll_index+1])
                roll_index += 2
        else:
            first_roll = int(rolls[roll_index])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            roll_index += 2
    return score