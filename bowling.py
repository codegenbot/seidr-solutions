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
            strike_bonus = 10 - (9 - int(frame[0]))
            score += 10 + strike_bonus * 1
            for i in range(2, 11):
                if frame[i]:
                    first_roll = int(frame[:i].replace('/', '')[0])
                    second_roll = int(frame[:i].replace('/', '')[1])
                    score += max(first_roll, second_roll) + min(first_roll, second_roll)
            roll = 0
    return score