def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i]:
            parts = frames[i].split("/")
            if len(parts) == 2:
                score += int(parts[0]) + int(parts[1])
            else:
                score += int(parts[0])
        else:
            score += int(frames[i])
    return score