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
                if first_roll + second_roll < 10:
                    score += first_roll + second_roll
                else:
                    score += 10
            else:
                score += max(first_roll, second_roll) + min(first_roll, second_roll)
            roll = 0
        elif len(frame) > 2:
            strike_count = 1
            while len(frame) > 1 and strike_count <= 2:
                first_roll = int(frame[0])
                second_roll = int(frame[1])
                if strike_count == 1:
                    score += 10 + first_roll + second_roll
                else:
                    if first_roll + second_roll < 10:
                        score += 10 + first_roll + second_roll
                    else:
                        score += 10 + 10
                frame = frame[2:]
                strike_count += 1
            roll = 0
    return score