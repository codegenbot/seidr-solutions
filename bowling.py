```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10
            i += 1
            if i < len(frames) and frames[i] == "X":
                score += 10 + int(frames[i+1]) + int(frames[i+2])
                i += 2
            elif i < len(frames):
                score += 10 + int(frames[i])
                i += 1
        elif frames[i] == "/":
            score += 10 + int(frames[i-1])
            i += 1
        else:
            if i < len(frames) - 1 and frames[i+1] != "X" and frames[i+1] != "/":
                score += int(frames[i]) + int(frames[i+1])
                i += 2
            else:
                score += int(frames[i])
                i += 1
    return score