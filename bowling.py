def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            score += first_roll + second_roll
            roll += 2
        else:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            third_roll = int(frame[2])
            score += first_roll + second_roll + third_roll
            roll += 3
    if roll < 10:
        score += 10 - roll
    return score