```
def bowling_score(frames):
    score = 0
    frame_count = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += 10
        elif len(frame) > 1:
            strike = (len(frame) == 2 and frame[0] == 'X')
            spare = (frame_count < 9 and score + 1 + int(frame[0]) + int(frame[-1]) <= 10)
            if strike or spare:
                score += 10
            else:
                score += sum(map(int, frame))
        frame_count += 1
    return score