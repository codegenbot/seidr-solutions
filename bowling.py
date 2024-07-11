```
def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) == 2:
            score += int(frame[0]) + int(frame[1])
            roll += 1
        else:
            first_roll = int(frame[0])
            second_roll = int(frame[1:])
            if first_roll == 10:
                score += 10 + second_roll
                roll += 1
            elif first_roll + int(second_roll[0]) <= 10:
                score += first_roll + int(second_roll[0])
                roll += 1
            else:
                score += 10 + int(second_roll)
                roll += 2
    return score