def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i]:
            x1, x2 = map(int, re.split("/", frames[i]))
            score += min(x1, 10) + min(x2, 10)
        else:
            score += int(frames[i])
    return score