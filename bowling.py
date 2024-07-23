def bowling_score(frames):
    score = 0
    frames = [int(x) if x.isdigit() else x for x in frames]
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10
            if i + 1 < len(frames) and frames[i + 1] == "X":
                score += 10
            elif i + 1 < len(frames) and frames[i + 1].isdigit():
                score += int(frames[i + 1]) * 2
            i += 1
        elif frames[i] == "/":
            score += 10
            if i + 2 < len(frames):
                score += int(frames[i + 1]) + int(frames[i + 2])
            else:
                score += 0
            i += 2
        else:
            if i + 1 < len(frames) and frames[i + 1] == "X":
                score += 10 + 10
            elif i + 1 < len(frames) and frames[i + 1].isdigit():
                score += int(frames[i]) * 1 + int(frames[i + 1]) * 1
            else:
                score += int(frames[i]) * 2
            i += 2
    return score