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
            strike_count = 1
            while len(frame) > 2 and strike_count < 3:
                first_roll = int(frame[0])
                second_roll = int(frame[1])
                third_roll = int(frame[2])
                if first_roll == 10:
                    score += 10 + second_roll + third_roll
                    frame = frame[3:]
                else:
                    score += 10 + first_roll + second_roll
                    frame = frame[3:]
                strike_count += 1
            roll = 0
    return score