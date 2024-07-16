```
def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += int(frame)
            roll = 1
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if roll == 1:
                score += first_roll + second_roll
            else:
                score += max(first_roll, second_roll) + min(first_roll, second_roll)
            roll = 0
        elif len(frame) > 2:
            strike = int(frame[0])
            spare = int(frame[1]) + int(frame[2])
            if roll == 0:
                score += strike + spare
            else:
                score += max(strike, spare) + min(strike, spare)
            roll = 1
    return score