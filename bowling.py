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
                strike_score = 10 + bowling_score(frames[3:]) if len(frames[3:]) > 2 else first_roll + second_roll
                score += max(first_roll, second_roll) + min(first_roll, second_roll) + strike_score
            roll = 0
        elif len(frame) > 2:
            raise ValueError('Invalid frame')