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
            if frame_num < 10 and sum(map(int, frame)) >= 10:
                score += sum(map(int, frame))
                frame_num += 1
            else:
                score += 10
    return score