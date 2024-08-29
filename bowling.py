```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10
            i += 1
            if i < len(frames) and frames[i] in "/X":
                score += int(frames[i])
                i += 1
            elif i < len(frames):
                score += int(frames[i])
                i += 2
        elif frames[i] == "/":
            score += 10
            i += 1
            if i < len(frames) and frames[i] in "123456789":
                score += int(frames[i])
                i += 1
        else:
            frame_score = int(frames[i]) + (0 if i+1 >= len(frames) or frames[i+1] in "/X" else int(frames[i+1]))
            score += frame_score
            i += 2
    return score