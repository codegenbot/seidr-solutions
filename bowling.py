def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10
            if i + 1 < len(frames) and frames[i+1] == "/":
                score += 10
                i += 2
            elif i + 1 < len(frames):
                score += int(frames[i+1])
                i += 2
        elif frames[i] == "/":
            score += 10
            i += 2
        else:
            if i + 1 < len(frames) and frames[i+1] == "X":
                score += 10 + int(frames[i]) + 10
                i += 2
            elif i + 1 < len(frames):
                score += int(frames[i])
                i += 1
    return score