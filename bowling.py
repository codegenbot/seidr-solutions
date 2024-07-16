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
            strike_count = int(frame[0])
            spare_count = sum(map(int, frame[1:]))
            if roll == 0 and strike_count == 10:
                score += 10 + spare_count
            elif roll == 0 and strike_count < 10:
                raise ValueError('Invalid frame')
            else:
                score += strike_count
            roll = 1
    return score