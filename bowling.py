```
def bowling_score(frames):
    score = 0
    frame_num = 1
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += 10
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
        else:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if frame_num < 9 and first_roll + second_roll == 10:
                score += first_roll + second_roll
                frame_num += 1
            elif frame_num == 10 and first_roll == 10:
                score += 10
                frame_num += 1
            else:
                score += 10 + second_roll
        if len(frame) > 2 and frame[2] == 'X':
            score += 10
            frame_num += 1
    return score