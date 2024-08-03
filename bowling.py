def bowling_score(s):
    score = 0
    frames = [
        list(map(int, frame.split("/"))) + [10] if "/" in frame else [int(frame)] * 2
        for frame in s.split()
    ]
    for i, frame in enumerate(frames):
        if len(frame) == 1:
            score += 10
        elif sum(frame[:2]) == 10:
            score += sum(frame)
        elif sum(frame) < 10:
            score += sum(frame)
        else:
            if i < 9 and frames[i + 1][0] == 10:
                score += frame[0] + 10
            else:
                score += sum(frame[:2])
    return score