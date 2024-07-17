def bowling_score(game):
    score = 0
    frame = 0
    roll = game.replace("/", "0").split("X")
    for i in range(len(roll)):
        if roll[i] == "":
            score += 10
        elif roll[i] != "0":
            if len(roll) > i + 1 and roll[i + 1] == "X":
                score += 10 + int(roll[i])
            else:
                score += max(int(roll[i]), 10)
        frame += int(roll[i]) or 2
    return score