def bowling_score(bowling):
    score = 0
    roll = 0
    for i in range(1, 11):
        if "/" in str(i) + bowling[i - 1 : i + 1]:
            f = list(map(int, re.findall("\d", str(i) + bowling[i - 1 : i + 1])))
            score += sum(f)
            if len(f) == 2:
                roll += 10
        else:
            f = int(bowling[i - 1])
            score += f
            if f == 10:
                roll += 10
    while roll < 10:
        if "/" in bowling[roll : roll + 3]:
            f = list(map(int, re.findall("\d", bowling[roll : roll + 3])))
            score += sum(f)
            if len(f) == 2:
                roll += 2
        else:
            f = int(bowling[roll])
            score += f
            if f == 10:
                roll += 1
    return score