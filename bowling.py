def bowling_score(frames):
    score = 0
    frames = [list(map(int, list(frame))) for frame in (frames.replace('-', '0').replace('/', '0/0')).split('0')]
    for i, frame in enumerate(frames):
        if len(frame) == 1:
            score += 10
        elif len(frame) == 2:
            score += sum(frame)
        else:
            if sum(frame[:2]) == 10:
                score += 10 + frame[2]
            elif sum(frame[1:]) == 10:
                score += 10 + frame[0]
            else:
                score += sum(frame)
    return score