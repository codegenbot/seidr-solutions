```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i]:
            parts = frames[i].split('/')
            first_roll = int(parts[0])
            second_roll = int(parts[1])
            if first_roll + second_roll == 10:
                score += 10 + sum(int(frame) for frame in frames[:i])
            else:
                score += first_roll + second_roll
        else:
            score += int(frames[i])
    return score