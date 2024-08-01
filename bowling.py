def bowling_score(bowling_str):
    score = 0
    frames = [
        list(map(int, frame.split("/"))) if "/" in frame else list(map(int, frame))
        for frame in bowling_str.split()
    ]
    for i in range(len(frames)):
        if len(frames[i]) == 1:
            score += frames[i][0]
        elif len(frames[i]) == 2:
            score += sum(frames[i])
            if sum(frames[i]) < 10:
                score += 10 - sum(frames[i])
        else:
            score += sum(frames[i])
    return score