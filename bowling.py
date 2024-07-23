```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            if i + 1 < len(frames) and frames[i + 1] in ["X", "/"]:
                score += 10 + int(frames[i + 2:i + 3]) * 10
            elif i + 1 < len(frames):
                score += 10 + int(frames[i + 1:i + 2])
            else:
                score += 10
            i += 1
        elif frames[i] == "/":
            if i + 2 < len(frames) and frames[i + 2].isdigit():
                score += 10 + int(frames[i + 2:i + 3])
            else:
                score += 10
            i += 2
        else:
            if len(frames[i:]) >= 2 and frames[i:i+2] in ["10", "8/", "9/", "7/5", "6/4"]:
                score += 10
            elif int(frames[i]) + int(frames[i + 1]) == 10:
                score += 10
            else:
                score += int(frames[i])
                if i + 1 < len(frames) and frames[i + 1].isdigit():
                    score += int(frames[i + 1])
            i += 2
    return score