def bowling_score(frames):
    score = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += 10
        elif len(frame) > 1 and int(frame[0]) + int(frame[1]) == 10:
            score += 10 + int(frame[-1])
        else:
            first_roll = int(frame[0])
            second_roll = 10 - first_roll
            if frame[1] != "":
                second_roll = int(frame[1])
            score += first_roll + second_roll
    return score