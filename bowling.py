def bowling_score(game):
    score = 0
    rolls = game.replace("/", "").split("X")
    for i in range(len(rolls)):
        if rolls[i] == "":
            score += 10 - (len(rolls) - 1 - i)
        elif rolls[i] == "X":
            score += 10
        else:
            score += int(rolls[i])
    return score