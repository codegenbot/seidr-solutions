def bowling_score(gutter_balls):
    frames = gutter_balls.split("/")
    score = 0
    for i, frame in enumerate(frames):
        if len(frame) == 1:  # Gutter ball
            score += 0
        elif len(frame) == 2:  # One roll
            score += int(frame[0]) * (10 - i)
        else:  # Two rolls
            score += sum(map(int, frame)) + (10 - i)
    return score