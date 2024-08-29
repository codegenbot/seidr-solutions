def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            if i < len(frames) - 1 and frames[i + 1] == "X":
                score += 30
                i += 2
            elif i < len(frames) - 1 and frames[i + 1] == "/":
                score += 20 + int(frames[i + 2])
                i += 3
            else:
                score += 10 + int(frames[i + 1]) + int(frames[i + 2])
                i += 3
        elif frames[i] == "/":
            if i < len(frames) - 1 and frames[i + 1] == "X":
                score += 20 + int(frames[i + 2])
                i += 2
            else:
                score += 10 + int(frames[i + 1])
                i += 2
        else:
            if i < len(frames) - 1 and frames[i + 1] == "X":
                score += 10 + int(frames[i]) + 10 + int(frames[i + 2])
                i += 3
            elif i < len(frames) - 1 and frames[i + 1] == "/":
                score += 10 + int(frames[i]) + 10 + int(frames[i + 2])
                i += 3
            else:
                score += 10 + int(frames[i]) + int(frames[i + 1])
                i += 2
    return score