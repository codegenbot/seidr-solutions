def bowling_score(s):
    score = 0
    roll = ""
    for c in s + "0":
        if c.isdigit():
            roll += c
        elif roll:
            if len(roll) == 1:
                score += int(roll)
            else:
                score += sum(range(1, int(roll[-1]) + 1))
            roll = ""
    return score