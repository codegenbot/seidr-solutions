def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i]:
            parts = frames[i].split("/")
            score += sum(int(part) for part in parts)
        else:
            score += int(frames[i])
    return score