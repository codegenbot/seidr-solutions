```
def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            if int(frame) < 10:
                score += int(frame)
            else:
                score += 10
            roll += 1
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if first_roll + second_roll == 10:
                score += 10
                roll += 1
            else:
                score += first_roll + second_roll
            roll += 1
        elif len(frame) > 2:
            first_roll = int(frame[:1])
            second_roll = int(frame[1:2])
            third_roll = int(frame[2:])
            if first_roll + second_roll == 10:
                score += first_roll + second_roll + third_roll
                roll += 1
            else:
                score += 10
                roll += 1
    return score