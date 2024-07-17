```
def bowling_score(s):
    frames = [list(map(int, frame.split('/'))) for frame in s.split('X') if frame]
    frames += [['X']]

    score = 0
    prev_frame = None
    for frame in frames:
        if len(frame) == 1: 
            score += 10
        elif frame[0] == 10:
            score += sum(frame)
        else:
            score += sum(prev_frame[:2]) + min(frame[0], 10)
        prev_frame = frame

    return score