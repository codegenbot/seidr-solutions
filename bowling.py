def bowling_score(s):
    score = 0
    roll = []
    for c in s:
        if c.isdigit():
            roll.append(int(c))
        elif c == "/":
            strike = len(roll) > 1 and (sum(roll) >= 10)
            if strike:
                score += 10 + sum(
                    [max(10 - i, 0) for i in range(1, min(len(roll), 2) + 1)]
                )
            else:
                score += sum(roll)
            roll = []
        elif c == "X":
            strike = True
            score += 10 + sum([max(10 - i, 0) for i in range(1, 3)])
            roll = []
    if len(roll):
        strike = len(roll) > 1 and (sum(roll) >= 10)
        if strike:
            score += 10 + sum([max(10 - i, 0) for i in range(1, min(len(roll), 2) + 1)])
        else:
            score += sum(roll)
    return score