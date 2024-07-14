def bowling_score(game):
    score = 0
    frame = 1
    for roll in game + "/":
        if roll == "X":
            score += 10 + (10 if frame < 9 and game[game.index(roll) + 1] == "X" else 0)
            frame += 1
        elif roll == "/":
            score += 10
            frame += 1
        elif roll.isdigit():
            if len(roll) > 1:
                score += int(roll) * 2
                frame += 1
            else:
                score += int(roll)
                frame += (
                    1
                    if game[game.index(roll) + 1] == "X"
                    or game[game.index(roll) + 1].isdigit()
                    else 0
                )
        else:
            if roll == "-":
                continue
            score += int(roll)
            frame += (
                1
                if game[game.index(roll) + 1] == "X"
                or game[game.index(roll) + 1].isdigit()
                else 0
            )
    return score