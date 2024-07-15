def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += int(frame) * 10 + 10
            roll += 2
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            score += first_roll + second_roll
            roll += 2
        else:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            third_roll = int(frame[2])
            if first_roll == 10:  # strike
                score += 10 + 10 + 10
                roll += 3
            elif second_roll == 10:  # spare
                score += 10 + 10
                roll += 2
            else:  # open frame
                score += first_roll + second_roll + third_roll
                roll += 3
    return score if roll == 10 else score