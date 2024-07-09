```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 30
            i += 1
        elif frames[i] == "/":
            score += 10 + int(frames[i+1])
            i += 2
        else:
            frame_score = 0
            j = 0
            while j < len(frames[i]):
                if frames[i][j].isdigit():
                    frame_score += int(frames[i][j])
                    j += 1
                elif frames[i][j] == "/":
                    score += min(10, frame_score) + 10 - int(frames[i][:j-1])
                    i += 2
                    break
            while i < len(frames) and (frames[i] != "-" or not frames[i].isdigit()):
                if frames[i] != "-":
                    score += int(frames[i])
                i += 1
    return score