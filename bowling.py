```
def bowling_score(frames):
    score = 0
    frame_index = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += 10
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if first_roll + second_roll == 10:
                score += 10
            else:
                score += first_roll + second_roll
        else:
            score += 10
        frame_index += 1
    return score