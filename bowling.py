def bowling_score(s):
    frames = [
        list(map(int, frame.split("/"))) if "/" in frame else [int(frame)]
        for frame in s.split()
    ]
    score = 0
    for i, frame in enumerate(frames):
        if len(frame) == 1:
            score += frame[0]
        elif len(frame) == 2:
            if sum(frame) >= 10:
                score += sum(frame)
            else:
                score += 10 - (10 - sum(frame))
        else:
            if frame[0] == 10:
                score += 10 + sum(frames[i + 1])
            else:
                score += sum(frame)
    return score