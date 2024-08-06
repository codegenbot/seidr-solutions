def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 30
        elif frames[i : i + 2].startswith("///"):
            score += 30
        else:
            score += int(frames[i])
            if i < len(frames) - 1 and frames[i + 1] != "/":
                score += int(frames[i + 1])
    return score