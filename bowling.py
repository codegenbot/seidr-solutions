def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += int(frame)
            roll = 0
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if roll < 1:
                score += first_roll + second_roll
            else:
                score += max(first_roll, second_roll) + roll
            roll = 0
        else:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            third_roll = int(frame[2])
            if roll < 1:
                score += first_roll + second_roll + third_roll
            else:
                score += max(first_roll, second_roll) + max(
                    third_roll, 10 - (max(first_roll, second_roll))
                )
            roll = 0
        if len(frame) > 1 and frame[-1] == "X":
            roll = 10
    return score