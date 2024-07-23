def bowling_score(frames):
    score = 0
    frames = [int(x) if x.isdigit() else x for x in frames]
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10
            i += 1
            if i + 1 < len(frames):
                if frames[i] == "X":
                    score += 10
                elif frames[i].isdigit():
                    score += int(frames[i]) * 10
            elif i + 2 <= len(frames) and frames[i+1] == "/" and frames[i+2].isdigit():
                score += 10 + int(frames[i+2])
        elif frames[i] == "/":
            if i + 3 < len(frames):
                score += 10 + int(frames[i+1]) + int(frames[i+2]) + int(frames[i+3])
            else:
                score += 10
        elif frames[i].isdigit() and frames[i+1].isdigit():
            score += int(frames[i]) + int(frames[i+1])
        i += 1
    return score