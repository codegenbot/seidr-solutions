def bowling_score(s):
    frames = [list(map(int, frame.split("/"))) for frame in s.split("-")]
    score = 0
    roll = 0
    for i, frame in enumerate(frames):
        if len(frame) == 1:
            score += 10 + (10 - sum(frames[: i + 1])) * (roll < 2)
            break
        elif sum(frame) == 10:
            score += sum(frame)
            roll += 1
        else:
            score += sum(frame)
    return score