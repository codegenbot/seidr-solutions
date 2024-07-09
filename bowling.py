```
def bowling_score(frames):
    score = 0
    frames = [list(map(int, frame.split())) for frame in frames.split('/')]
    for i, frame in enumerate(frames):
        if len(frame) == 1:
            score += 10
            if i < 9:
                score += sum(frames[i+1][:2])
        elif len(frame) == 2:
            score += sum(frame)
        else:
            first_two = sum(frame[:2])
            last_roll = frame[2]
            if first_two == 10:
                score += 10 + last_roll
                if i < 9:
                    score += sum(frames[i+1][:2])
            elif last_roll == 10:
                score += 5 + sum(frames[i+1][:1] or [0])
            else:
                score += first_two + last_roll
    return score