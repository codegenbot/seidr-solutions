def bowling_score(game):
    score = 0
    frame = 0
    for roll in game:
        if roll == "X":
            score += 10 + (10 if frame < 8 else 10)
            frame += 1
        elif roll == "/":
            score += 10 - int(roll[0])
            frame += 1
        else:
            score += int(roll) * (
                3 if frame < 9 and game[game.index(roll) + 2] in ["X", "/"] else 1
            )
            frame += (frame == 9) or (int(roll) == 10 and frame < 8)
    return score