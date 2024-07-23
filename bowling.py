```
def bowling_score(frames):
    score = 0
    frames = [10 if x == "X" else (10 - int(x)) if x == "/" else int(x) for x in frames]
    i = 0
    while i < len(frames):
        if frames[i] == 10:
            score += 10
            if i + 1 < len(frames):
                score += frames[i+1]*2
            i += 1
        elif frames[i] > 0:
            score += frames[i]
            i += 1
            if i < len(frames) and frames[i] > 0:
                if score + frames[i] > 10:
                    score += 10 - (10 - score)
                else:
                    score += frames[i]
        elif frames[i] == "X":
            score += 10
            i += 1
        elif frames[i] == "/":
            score += 10 - int(frames[i+1])
            i += 2
    return score