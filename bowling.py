def bowling_score(game):
    score = 0
    roll = [int(x) for x in game.replace("/", "00")]
    for i in range(10):
        if "/" in str(i + 1) + str(roll[i]):
            first_roll, second_roll = map(int, str(i + 1) + str(roll[i]).split("/"))
            score += max(first_roll, 10) + (10 - first_roll) * min(second_roll, 10)
        else:
            if i < 9 and roll[i + 1] == 0:
                score += sum(roll[: i + 1])
            else:
                score += sum(roll[: i + 1]) + (10 - roll[i])
    return score