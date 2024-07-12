def bowling_score(frames):
    score = 0
    frames = frames.split('/')
    for i, frame in enumerate(frames):
        if len(frame) == 1:
            score += 10
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if first_roll + second_roll == 10:
                if i < 9: 
                    score += 10 + int(frames[i+1].lstrip())
                else: score += 10
            else:
                score += first_roll + second_roll
        elif len(frame) == 3:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            third_roll = int(frame[2])
            if first_roll + second_roll == 10:
                score += 10 + third_roll
            elif second_roll + third_roll == 10:
                score += 10 + first_roll
            else:
                score += first_roll + second_roll + third_roll
    return score