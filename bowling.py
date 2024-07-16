```
def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.replace('-', '0').split('/'):
        if len(frame) == 1:
            score += int(frame)
            roll = 1
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[-1] or 0)
            if roll == 1:
                score += first_roll + second_roll
            else:
                if first_roll < 10:
                    score += first_roll + second_roll
                else:
                    score += 10 + second_roll
            roll = 0
        elif len(frame) > 2:
            frame_list = list(map(int, frame))
            score += sum(frame_list)
    return score