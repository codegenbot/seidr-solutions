def bowling_score(frames):
    score = 0
    roll = [int(x) for x in re.sub("[^0-9X]", "", frames)]
    for i in range(0, 10 * 2, 2):
        if roll[i] == X:
            score += 30
        elif roll[i : i + 2].count(X) > 1:
            score += 10 + (roll[i + 1] if len(roll[i : i + 2]) == 3 else 20)
        else:
            score += sum(roll[i : i + 2])
    return score