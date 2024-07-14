```
def bowling_score(frames):
    score = 0
    frames = [list(map(int, frame.split())) if frame != '-' else ['X'] for frame in frames.replace('/', '-').split('-')]
    while frames:
        frame = frames.pop(0)
        if frame == ['X']:
            if frames:
                if len(frames) >= 2:
                    score += 10 + sum(frames[:2])
                    frames = frames[2:]
                else:
                    score += 10
            else:
                score += 10
        elif len(frame) > 1 and sum(frame) == 10:
            if frames:
                if len(frames) >= 2:
                    score += 10 + sum(frames[:2])
                    frames = frames[2:]
                else:
                    score += 10 + sum(frame)
            else:
                score += 10 + sum(frame)
        else:
            score += sum(frame)
    return score