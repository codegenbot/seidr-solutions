```
def bowling_score(frames):
    score = 0
    roll = [int(x) for x in re.findall(r'\d', frames)]
    frame_count = 0
    while len(roll) > 1:
        if roll[0] == 10:
            score += 10 + (10 - roll[1])
            roll = roll[2:]
        elif roll[0] + roll[1] >= 10:
            score += 10
            if roll[0] + roll[1] == 10:
                roll = roll[2:]
            else:
                score += roll.pop(0)
                roll = roll[:]
        else:
            score += roll[0] + roll[1]
            roll = roll[2:]
        frame_count += 1
    if frame_count < 10:
        score += sum(roll)
    return score