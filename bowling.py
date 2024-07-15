def bowling_score(frames):
    score = 0
    roll = 0
    previous_frame = []

    for frame in frames.split("/"):
        if len(frame) == 1:
            first_roll = int(frame)
            if roll < 9 and first_roll + sum(previous_frame) <= 10:
                score += first_roll + sum(previous_frame)
                previous_frame = []
                roll += 2
            else:
                score += first_roll * 10 + 10
                previous_frame = [first_roll]
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if roll < 9 and (first_roll + second_roll) <= 10:
                score += first_roll + second_roll
                previous_frame = []
                roll += 2
            elif first_roll == 10:
                score += 10 + 10 + 10
                previous_frame = [10]
                roll += 3
            else:
                score += first_roll + second_roll
                previous_frame = [first_roll, second_roll]
                roll += 2
        else:
            if len(previous_frame) > 0 and sum(previous_frame) == 10:
                score += 10 + 10
            elif sum(previous_frame) > 0:
                score += sum(previous_frame) + int(frame)
            else:
                score += int(frame[0]) * 10 + 10
        if len(previous_frame) > 0 and sum(previous_frame) < 10:
            if roll < 9:
                score += int(frame)
            else:
                score -= previous_frame.pop()
    return score