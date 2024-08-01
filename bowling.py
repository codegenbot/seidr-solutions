```
def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) == 2:
            first_roll, second_roll = map(int, frame)
            score += first_roll + second_roll
            roll += 1
        else:
            first_roll, second_roll, third_roll = map(int, frame[:2]), int(frame[2]), int(frame[-1])
            if first_roll + second_roll == 10:
                score += first_roll + second_roll + third_roll
                roll += 1
            elif second_roll == 10:
                score += first_roll + 10 + third_roll
                roll += 2
            else:
                score += first_roll + second_roll + 10
                roll += 2
    if roll < 10:
        score += 10 - roll
    return score