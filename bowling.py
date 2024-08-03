def bowling_score(frames):
    score = 0
    for frame in frames.split("/"):
        if len(frame) == 1 and frame[0].isdigit():
            score += int(frame)
        elif len(frame) == 2:
            first_roll = int(frame[:1])
            second_roll = int(frame[1:])
            if first_roll == 10:
                score += 10 + second_roll
            else:
                score += first_roll + second_roll
        else:
            if frame[0].isdigit():
                first_roll = int(frame[:1])
                second_roll = int(frame[1:-1])
                third_roll = int(frame[-1])
                score += first_roll + second_roll + third_roll
    return score