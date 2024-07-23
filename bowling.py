def bowling_score(frames):
    score = 0
    frames = [int(x) if x.isdigit() else x for x in frames]
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            if i + 1 < len(frames) and frames[i + 1] == "X":
                score += 10 + 10 * 2
            elif i + 1 < len(frames) and frames[i + 1].isdigit():
                score += 10 + int(frames[i + 1]) * 10
            else:
                score += 10
            i += 1
        elif frames[i] == "/":
            if i + 2 < len(frames) and frames[i + 2].isdigit():
                score += 10 + int(frames[i + 2])
            else:
                score += 10
            i += 2
        else:
            if int(frames[i]) + int(frames[i + 1]) >= 10:
                score += 10
            else:
                score += int(frames[i]) * 1 + int(frames[i + 1]) * 1
            i += 2
    return score