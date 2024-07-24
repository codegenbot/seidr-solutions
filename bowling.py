```
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if len(rolls) > roll_index:
            first_roll = int(rolls[roll_index])
            roll_index += 1
            if first_roll == 10: 
                score += 10
                continue
            elif first_roll + int(rolls[roll_index]) <= 10:
                score += first_roll + int(rolls[roll_index])
                roll_index += 1
            else:
                second_roll = int(rolls[roll_index])
                roll_index += 1
                if second_roll == 0: 
                    score += first_roll + 10
                else:
                    score += first_roll + second_roll
        else:
            break
    return score