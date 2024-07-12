def bowling_score(frames):
    score = 0
    frames = [list(map(int, frame.split())) for frame in frames.split('/')]
    for frame in frames:
        if len(frame) == 1:
            score += 10
        elif len(frame) == 2:
            first_roll, second_roll = frame
            if first_roll + second_roll == 10:
                score += 10
            else:
                score += sum(frame)
        else:
            first_roll, second_roll, third_roll = frame
            if first_roll + second_roll == 10:
                score += 10 + third_roll
            elif second_roll + third_roll == 10:
                score += 10 + first_roll
            else:
                score += sum(frame)
    return score