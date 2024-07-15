def bowling_score(frames):
    score = 0
    roll = 0
    previous_frame = []
    for frame in frames.split("/"):
        if len(frame) == 1:
            first_roll = int(frame)
            if roll < 9 and (first_roll + previous_frame[0]) <= 10:
                score += first_roll + previous_frame[0]
                previous_frame = []
                roll += 2
            else:
                if roll < 9:
                    score += first_roll * 10 + 10
                else:
                    score += first_roll * 10
                previous_frame = [first_roll]
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if roll < 9 and (first_roll + second_roll) <= 10:
                score += first_roll + second_roll
                previous_frame = []
                roll += 2
            elif first_roll == 10:
                score += 20
                previous_frame = [10]
                roll += 1
            else:
                if roll < 9:
                    score += first_roll + second_roll + 10
                else:
                    score += 10 + (first_roll + second_roll)
                previous_frame = [first_roll, second_roll]
        else:
            if len(previous_frame) > 0 and sum(previous_frame) == 10:
                score += 20
            elif len(previous_frame) > 0:
                score += previous_frame[0] * 10 + 10
            else:
                if roll < 9:
                    score += int(frame[0]) * 10 + 10
                else:
                    score += int(frame[0]) * 10
    return score