```
def bowling_score(frames):
    score = 0
    frame_index = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += 10
        elif 'X' in frame:
            score += 10 + (10 - int(frame.replace('X', '')))
        else:
            first_roll, second_roll = map(int, frame)
            if first_roll + second_roll == 10:
                score += first_roll + 10
            else:
                score += first_roll + second_roll
        frame_index += 1
    return score