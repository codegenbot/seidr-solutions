def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) == 2:
            if int(frame[0]) + int(frame[1]) >= 10:
                score += 10
                roll += 1
            else:
                score += int(frame[0]) + int(frame[1])
                roll += 1
        else:
            score += int(frame[0]) + int(frame[1])
            if int(frame[2]) == "X":
                score += 10
                roll += 1
            else:
                score += int(frame[2])
                roll += 1
    return score