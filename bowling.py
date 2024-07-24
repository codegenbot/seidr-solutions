```
def bowling_score(frames):
    score = 0
    frame_num = 1
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += int(frame)
        elif len(frame) == 2:
            first_roll, second_roll = map(int, frame)
            if first_roll + second_roll == 10:
                score += 10
            else:
                score += first_roll + second_roll
            frame_num += 1
        else:
            first_roll, second_roll, third_roll = map(int, frame)
            score += first_roll + second_roll
            if first_roll + second_roll + third_roll == 10:
                score += third_roll
            frame_num += 1
    return score