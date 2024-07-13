```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            if i + 2 < len(frames):
                score += 10 + int(frames[i+1]) + int(frames[i+2])
            else:
                score += 10 + (int(frames[i-1]) if i-1 >= 0 and frames[i-1].isdigit() else 0)
            i += 3
        elif frames[i] == "/":
            frame_score = sum(int(x) for x in frames[i+1:i+3])
            score += 10 - (int(frames[i-1]) if i-1 >= 0 and frames[i-1].isdigit() else 0)
            i += 3
        else:
            if int(frames[i]) + int(frames[i+1]) == 10 or (frames[i].isdigit() and frames[i+1] == "/"):
                score += 10
            elif int(frames[i]) == 0 and frames[i+1] in ["X", "/"]:
                if i + 2 < len(frames) and frames[i+2] in ["X", "/"]:
                    score += 20
                else:
                    score += 10
            else:
                score += sum(int(x) for x in frames[i:i+2])
        i += 1
    return score