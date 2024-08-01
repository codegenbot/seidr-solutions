def bowling_score(frames):
    score = 0
    roll = list(map(int, frames.replace("/", "")))
    for i in range(0, len(roll), 2):
        if roll[i] == 10:
            score += 10 + roll[i + 1]
        elif roll[i] + roll[i + 1] >= 10:
            score += 10
        else:
            score += roll[i] + roll[i + 1]
    return score