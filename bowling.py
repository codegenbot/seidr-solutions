def bowling_score(frames):
    score = 0
    roll = list(map(int, frames.replace("/", "")))
    for i in range(0, len(roll), 2):
        if roll[i] == 10:
            score += roll[i]
            score += roll[i + 1]
        elif sum(roll[i : i + 2]) < 10:
            score += roll[i]
            score += roll[i + 1]
        else:
            score += sum(roll[i : i + 2])
    return score