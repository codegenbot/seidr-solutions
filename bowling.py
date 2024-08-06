def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += 10 + (10 - int(frame)) * 2
        else:
            if int(frame[0]) + int(frame[1]) == 10:
                score += 10 + roll
            else:
                score += sum(map(int, frame))
                roll = 10 - sum(map(int, frame))
    return score