def bowling_score(frames):
    score = 0
    roll = [int(x) for x in frames if x.isdigit()]
    for i in range(0, len(roll), 2):
        if roll[i] == 10:
            score += 10 + (
                10 - roll[i + 1] if i + 1 < len(roll) and roll[i + 1].isdigit() else 0
            )
        elif sum(roll[i : i + 2]) == 10:
            score += 10
        else:
            score += sum(roll[i : i + 2])
    return score