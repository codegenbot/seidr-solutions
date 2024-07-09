```
def bowling_score(frames):
    frames = [list(map(int, frame.split())) for frame in frames.split('/')]
    score = 0
    i = 0
    while i < len(frames):
        if len(frames[i]) == 1:
            score += 10
            i += 1
        elif len(frames[i]) == 2:
            score += sum(frames[i])
            i += 1
        else:
            first_two = sum(frames[i][:2])
            last_roll = frames[i][2]
            if first_two == 10:
                score += 10 + sum(frames[i+1:i+3])
                i += 3
            elif last_roll == 10:
                score += first_two + 5 + frames[i+1][0]
                i += 2
            else:
                score += first_two + last_roll
                i += 1
    return score