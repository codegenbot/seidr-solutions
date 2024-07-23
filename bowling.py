def bowling_score(frames):
    score = 0
    frames = [10 if x == "X" else int(x) if x.isdigit() else 10 - int(x.split('/')[1]) for x in frames]
    i = 0
    while i < len(frames):
        if frames[i] == 10:
            score += 10
            if i + 1 < len(frames):
                if frames[i+1] == 10:
                    score += 20
                else:
                    score += 10 + frames[i+1]
            i += 1
        elif isinstance(frames[i], int):
            score += frames[i]
            if i + 1 < len(frames) and frames[i+1] != 0:
                score += frames[i+1]
            i += 2
    return score