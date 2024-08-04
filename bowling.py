def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i]:
            parts = frames[i].split("/")
            score += int(parts[0])
            if len(parts) > 1:
                score += int(parts[1])
        else:
            score += int(frames[i])
    return score