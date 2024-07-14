```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if len(str(rolls[roll_index:])) >= 2:
            first_roll = int(str(rolls[roll_index]))
            second_roll = int(str(rolls[roll_index + 1]))
            score += first_roll + second_roll
            roll_index += 2
        else:
            score += int(str(rolls[roll_index]))
            roll_index += 1
    return score