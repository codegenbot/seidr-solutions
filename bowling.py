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
            strike = int(frame[:2])
            bonus = 0
            for i in range(2):
                if i == 1 and frame[2] != '0':
                    bonus += int(frame[2:])
                else:
                    bonus += int(frame[i+2:])
            score += strike + bonus
        roll = 0