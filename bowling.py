def bowling_score(s):
    frames = [list(map(int, l.split("/"))) if "/" in l else [int(l)] for l in s.split()]
    score = 0
    roll = 0
    for frame in frames:
        if len(frame) == 1 or (len(frame) == 2 and sum(frame) >= 10):
            score += sum(frame)
            roll = 0
        else:
            score += max(frame[0], 10 - roll + frame[0])
            roll = max(roll, frame[0])
    return score