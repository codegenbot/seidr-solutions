```
def bowling_score(rolls):
    score = 0
    roll = 0
    for frame in range(10):
        if len(str(rolls[roll:roll+2])) == 3:
            one, two = map(int, str(rolls[roll:roll+2]))
            if one + two == 10:
                score += 10
                roll += 1
            else:
                score += one + two
                roll += 2
        else:
            one = int(str(rolls[roll]))
            score += one
            roll += 1
    return score