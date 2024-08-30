def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += 10 + (10 - int(frame)) * 2
            roll += 2
        elif len(frame) > 1 and frame[0] != "X":
            strike = False
            score_frame = 10 + int(frame[0]) + int(frame[1])
            score += score_frame
            roll += 2
        else:
            if roll < 2:
                score += 10
                roll += 1
            else:
                score += 10 + int(frame[0]) + int(frame[1])
                roll = 0
    return score