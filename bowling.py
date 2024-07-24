```
def bowling_score(s):
    score = 0
    rolls = [int(x) for x in re.sub('[^0-9]', '/', s).split('/')]
    roll_index = 0
    for frame in range(1, 11):
        if frame == 10:
            if len(rolls) < 2 or len(rolls) > 3:
                return -1
            elif rolls[roll_index] + rolls[roll_index+1] == 10:
                score += 10 + (10 - rolls[roll_index] - rolls[roll_index+1]) * 2 if len(rolls) == 3 else 0
            else:
                score += 10 + (10 - rolls[roll_index] - rolls[roll_index+1]) * 2 if len(rolls) == 3 else 10
        elif frame < 10:
            if len(rolls) < 2 or len(rolls) > 2:
                return -1
            elif rolls[roll_index] + rolls[roll_index+1] == 10:
                score += 10 + (10 - rolls[roll_index] - rolls[roll_index+1]) * 2 if len(rolls) == 3 else 0
            else:
                score += rolls[roll_index] + rolls[roll_index+1]
        roll_index += 2
    return score