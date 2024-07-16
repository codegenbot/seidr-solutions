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
                    score += 10 + second_roll
                else:
                    score += max(first_roll, second_roll) + min(first_roll, second_roll)
            roll = 0
        elif len(frame) > 2:
            strikes = int(frame[0])
            while len(frame) > 1 and frame[1] != '0':
                frame = frame[1:]
            score += 10 + (int(frame[0]) if len(frame) > 0 else 0)
            roll = 0
    return score