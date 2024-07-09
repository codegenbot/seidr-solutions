```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 30
            if i+1 < len(frames) and frames[i+1] == "/":
                i += 2
            else:
                j = int(frames[i+1])
                while j > 0:
                    score += min(j, 10)
                    j -= min(j, 10)
        elif frames[i] == "/":
            score += 10 + int(frames[i+1])
            i += 2
        else:
            frame_score = 0
            for j in range(int(frames[i])):
                if i+1 < len(frames) and frames[i+1] != "-":
                    frame_score += min(10-int(frames[i]), int(frames[i+1]))
                    i += 1
                else:
                    break
        while i < len(frames) and (frames[i] != "-" or not frames[i].isdigit()):
            if frames[i] != "-":
                score += int(frames[i])
            i += 1
    return score