def bowling_score(frames):
    score = 0
    roll = 0
    for i, frame in enumerate(frames.split("/")):
        if len(frame) == 1:
            if int(frame) == 10:  # strike
                score += (
                    10 + 10 + 10
                    if i < 8
                    else 10 + 10 + int(next_frames[i]) if next_frames[i] else 10 + 10
                )
                roll += 3
            else:
                score += int(frame) * 10
                roll += 2
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if first_roll == 10:  # strike
                score += (
                    10 + 10 + 10
                    if i < 8
                    else 10 + 10 + int(next_frames[i]) if next_frames[i] else 10 + 10
                )
                roll += 3
            elif second_roll == 10:  # spare
                score += 10 + 10
                roll += 2
            else:
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
            else:
                score += first_roll + second_roll + third_roll
                roll += 3

    def next_frames(frames):
        if i < 8:
            return (
                str(int(next_frames[i - 1][0]) - int(frame[1]))
                if next_frames[i - 1][1]
                else str(10)
            )
        elif i == 9:
            return str(10)

    return score