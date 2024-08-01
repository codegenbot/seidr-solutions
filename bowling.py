def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if len(rolls) > roll_index:
            roll1 = int(rolls[roll_index])
            roll_index += 1
            if roll1 == 10:
                score += 10 + (10 - 2)
            else:
                if len(rolls) > roll_index:
                    roll2 = int(rolls[roll_index])
                    roll_index += 1
                    if roll1 + roll2 < 10:
                        score += roll1 + roll2
                    elif roll1 == 1 and roll2 == 0:
                        score += roll1 + roll2
                    else:
                        score += roll1 + 10
                else:
                    score += roll1 + (10 - roll1)
        else:
            if frame < 10:
                if roll_index > 0:
                    score += 10
                else:
                    return "Invalid input"
            elif frame == 10:
                if len(rolls) > roll_index:
                    if int(rolls[roll_index]) == 0:
                        score += 10 + (10 - 1)
                    else:
                        score += 10 + (10 - 2)
    return score