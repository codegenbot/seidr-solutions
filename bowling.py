```
def bowling_score(frames):
    score = 0
    frame_num = 1
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += int(frame)
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = 10 - first_roll
            if first_roll == 10:
                score += 10 + (frame_num < 9 and 10 or 0)
            else:
                score += first_roll + second_roll
        elif len(frame) > 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            third_roll = 10 - first_roll - second_roll
            if first_roll == 10 and second_roll == 10:
                score += 20
            elif first_roll == 10:
                score += 10 + second_roll + (frame_num < 9 and 10 or 0)
            else:
                score += first_roll + second_roll + third_roll
        frame_num += 1
    return score