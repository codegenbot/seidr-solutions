def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            frames[i * 2 : i * 2 + 2] = list(frames[i * 2 : i * 2 + 2])
            first = int(frames[i * 2].strip("/"))
            second = int(frames[i * 2 + 1].strip("-X/"))
            score += max(first, 10 - second) + second
        else:
            score += int(frames[i * 2].strip("X-0/"))
    return score