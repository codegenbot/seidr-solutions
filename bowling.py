def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i]:
            first, second = map(int, frames[i].split("/"))
            score += max(first, 10) + max(second, 10)
        else:
            score += int(frames[i])
    return score