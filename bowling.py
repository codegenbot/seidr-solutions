def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += 10
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            score += first_roll + second_roll
        else:
            roll += int(frame[0])
            if roll < 10:
                score += roll
                roll = 0
            else:
                score += 10
                roll = 0
    return score