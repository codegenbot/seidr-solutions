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
                while roll < 2 and len(frames.split('/')[frames.index(frame)+1:]) >= 3:
                    next_frame = frames.split('/')[frames.index(frame)+1].split()[0]
                    if len(next_frame) == 1:
                        score += int(next_frame)
                        break
                    elif len(next_frame) == 2:
                        strike += int(next_frame[0]) + int(next_frame[1])
                        roll += 1
                score += strike
            roll = 0
        elif len(frame) > 2:
            raise ValueError('Invalid frame')
    return score