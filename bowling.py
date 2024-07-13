```
def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += 10 + (10 - int(frame)) * (2 if roll > 0 else 1)
            roll = 0
        elif len(frame) == 2:
            strike = int(frame[0]) == 10
            frame_score = 10 + (10 - int(frame[0])) * (2 if roll > 0 or strike else 1)
            score += frame_score
            roll = strike
        else:
            first_roll, second_roll = map(int, frame)
            if first_roll == 10:
                score += first_roll + second_roll
                roll = 0
            elif roll > 0:
                score += first_roll + max(first_roll, second_roll)
                roll = 0
            else:
                score += first_roll + second_roll
        roll += 1
    return score