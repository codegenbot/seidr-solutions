def bowling_score(frames):
    score = 0
    frames = [int(x) if x.isdigit() else x for x in frames]
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10
            if i + 1 < len(frames) and (frames[i + 1] == "X" or frames[i + 1].isdigit()):
                score += int(frames[i + 1])
            elif i + 2 < len(frames):
                score += int(frames[i + 1]) + int(frames[i + 2])
            i += 1
        elif frames[i] == "/":
            score += 10
            if i + 2 < len(frames):
                score += int(frames[i + 1]) + int(frames[i + 2])
            i += 2
        else:
            if sum(int(x) for x in [frames[i], frames[i + 1]]) == 10:
                score += 10
            else:
                score += int(frames[i]) + int(frames[i + 1])
            i += 2
    return score