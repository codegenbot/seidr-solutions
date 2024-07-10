```
def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames:
        if '/' in frame:
            first_roll = int(frame.split('/')[0])
            second_roll = 10 - first_roll
            if roll < 1:
                score += 10 + (second_roll if first_roll == 10 else 0)
            else:
                score += first_roll + (second_roll if first_roll < 10 else 0)
        else:
            score += int(frame) * 2
        roll = (roll + 1) % 2
    return score