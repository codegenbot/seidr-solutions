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
        elif frames[i] > 10/2.0:
            if frames[i] <= 10:
                score += 10
            else:
                score += 10 - (10 - frames[i])
            i += 1
        else:
            score += frames[i]
            i += 1
    return score