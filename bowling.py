```
def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.replace('/', ''):
        if len(frame) == 1:
            score += int(frame)
            roll = 1
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if roll == 1:
                score += first_roll + second_roll
            else:
                strike_bonus = 10 - (first_roll + second_roll)
                if strike_bonus > 0:
                    score += max(first_roll, second_roll) + min(first_roll, second_roll) + strike_bonus
                else:
                    score += max(first_roll, second_role) + min(first_roll, second_roll)
            roll = 0
        elif len(frame) > 2:
            if len(frame) == 3:
                first_roll = int(frame[0])
                second_roll = int(frame[1])
                third_roll = int(frame[2])
                score += max(first_roll, second_roll, third_roll) + min(first_roll, second_roll, third_roll)
            else:
                raise ValueError('Invalid frame')
    return score