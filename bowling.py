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
                strike = first_roll + second_roll
                bonus = 0
                for i in range(2):
                    next_frame = frames.split('/')[i+1]
                    if len(next_frame) > 1:
                        bonus += int(next_frame[0])
                    elif len(next_frame) == 1:
                        bonus += int(next_frame)
                    else:
                        break
                score += strike + bonus
            roll = 0
        elif len(frame) > 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            third_roll = int(frame[2])
            if roll == 1:
                score += first_roll + second_roll + third_roll
            else:
                strike = first_roll + second_roll
                bonus = third_roll
                for i in range(3):
                    next_frame = frames.split('/')[i+1]
                    if len(next_frame) > 2:
                        bonus += int(next_frame[0]) + int(next_frame[1])
                    elif len(next_frame) == 1 or len(next_frame) == 2:
                        bonus += int(next_frame)
                    else:
                        break
                score += strike + bonus
            roll = 0
    return score