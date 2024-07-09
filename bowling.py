def bowling_score(frames):
    score = 0
    frame_values = [10 if len(frame) == 1 else sum(map(int, frame)) for frame in frames.split('/')]
    for i, value in enumerate(frame_values):
        if i < 9 and value < 10:
            score += value + frame_values[i+1]
        else:
            score += value
    return score