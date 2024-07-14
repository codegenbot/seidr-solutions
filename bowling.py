```
def bowling_score(bowling):
    score = 0
    rolls = [int(x) for x in re.findall(r'\d+', bowing)]
    roll_index = 0
    for frame in range(1, 11):
        if frame < 10:
            if rolls[roll_index] == 10:
                score += rolls[roll_index]
                roll_index += 1
            elif rolls[roll_index] + rolls[roll_index+1] >= 10:
                score += min(rolls[roll_index], 10) + rolls[roll_index+1]
                roll_index += 2
            else:
                score += rolls[roll_index] + rolls[roll_index+1]
                roll_index += 2
        else:
            if rolls[roll_index] == 0 and len(rolls) > roll_index+1 and rolls[roll_index+1] != 0:
                score += rolls[roll_index+1]
                roll_index += 2
            elif rolls[roll_index] == 10:
                score += rolls[roll_index]
                roll_index += 1
            else:
                if len(rolls) > roll_index+1 and sum(rolls[roll_index:roll_index+2]) < 10:
                    score += min(rolls[roll_index], 10)
                    roll_index += 1
                else:
                    score += rolls[roll_index]
                    roll_index += 1
    return score