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
                if first_roll == 10:
                    score += first_roll + second_roll
                else:
                    score += max(first_roll, second_roll) + min(first_roll, second_roll)
            roll = 0
        elif len(frame) > 2:
            strike = int(frame[0])
            rest = int(frame[1:]) if frame[1:] else 10 - strike
            while roll < 2:
                score += strike
                if roll == 0:
                    score += rest
                roll += 1
            roll = 0
    return score