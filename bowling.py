def bowling_score(frames):
    score = 0
    frame_values = [10 if len(frame) == 1 else sum(map(int, frame.split('-'))) for frame in frames.replace('X', '10-').split('/')]
    for i, value in enumerate(frame_values):
        if value == 10: 
            score += 10 + (frame_values[i+1] if i < 9 else 0)
        elif i < 9 and value < 10: 
            score += value + frame_values[i+1]
        else:
            score += value
    return score