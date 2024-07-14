```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(10):
        if rolls[roll_index] == 'X':
            score += 30
            roll_index += 1
        elif re.match('^-', rolls[roll_index]):
            score += 10 - int(rolls[roll_index][1])
            roll_index += 1
        else:
            first_roll = int(rolls[roll_index])
            roll_index += 1
            if len(rolls) > roll_index and rolls[roll_index] != '/':
                second_roll = int(rolls[roll_index])
                score += first_roll + second_roll
                roll_index += 1
            else:
                score += first_roll
    return score