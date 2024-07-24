def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += int(frame)
        elif len(frame) == 2:
            score += int(frame[0]) + int(frame[1])
        else:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            third_roll = int(frame[2])
            if first_roll + second_roll == 10:
                score += first_roll + second_roll
                roll = 3
            elif first_roll == 10:
                score += first_roll + second_roll + third_roll
                roll = 0
            else:
                score += first_roll + second_roll
                roll -= 1
    return score