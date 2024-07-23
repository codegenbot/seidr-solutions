```
def bowling_score(frames):
    score = 0
    frames = [int(x) if x.isdigit() else 10 if x == "X" else 10 - int(x) if x == "/" else x for x in frames]
    i = 0
    while i < len(frames):
        if frames[i] == 10:
            score += 10
            if i + 1 < len(frames) and isinstance(frames[i+1], int):
                score += frames[i+1]*2
            i += 1
        elif isinstance(frames[i], int):
            score += frames[i]
            i += 1
            if i < len(frames) and isinstance(frames[i], int):
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