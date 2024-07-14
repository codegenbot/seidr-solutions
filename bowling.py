def bowling_score(frames):
    score = 0
    roll = [int(x) for x in frames.replace("/", "")]
    for i in range(0, len(roll), 2):
        if roll[i] == 10:
            score += 10 + (i + 1 < len(roll) and sum(roll[i + 1 : i + 3]) or 0)
        elif roll[i] + roll[i + 1] >= 10:
            score += 10 + (i + 2 < len(roll) and sum(roll[i + 2 :]) or 0)
        else:
            score += roll[i] + roll[i + 1]
    return score