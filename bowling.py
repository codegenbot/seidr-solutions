def bowling_score(game):
    score = 0
    roll = list(map(int, re.sub("[^0-9X]", "", game)))
    for i in range(10):
        if len(str(i + 1)) > 1:
            if str(i + 1) == "10":
                score += sum(roll[i : i + 2])
                roll = roll[i + 2 :]
            else:
                score += 10
                roll = roll[:i]
        elif i < 9 and sum(roll[i : i + 2]) > 10:
            score += 10 + sum(roll[:i])
            roll = roll[i:]
        else:
            score += sum(roll[: i + 1])
            roll = roll[i + 1 :]
    return score