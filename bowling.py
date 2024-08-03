def bowling_score(game):
    score = 0
    frame = 1
    for roll in game + "/":
        if roll == "X":
            score += 10 + (10 if frame < 9 else 0)
            frame += 1
        elif roll == "/":
            score += 10 - int(game[: game.index("/")].count("X"))
            game = game[game.index("/") + 1 :]
            frame += 1
        elif roll.isdigit():
            if len(roll) > 1:
                score += 10 + int(roll)
                frame += 1
            else:
                score += int(roll)
                frame += 1 if game[: frame * 2].count("X") < 2 else 0
    return score