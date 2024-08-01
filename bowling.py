def bowling_score(game):
    score = 0
    frame = 1
    for roll in game + "/":
        if roll == "X":
            score += 10 + (10 if frame < 9 else 0)
            frame += 1
        elif roll == "/":
            score += 10 - int(game[game.index(roll) - 1])
            frame += 1
        elif roll.isdigit():
            score += int(roll)
            frame += 1 if len(roll) == 1 else 2
        else:
            if frame < 9:
                if game[:3].isdigit() and game[3] == "/":
                    score += 10 - int(game[:2])
                    frame += 1
                elif game[:1].isdigit() and game[1] == "X":
                    score += 10 + 10
                    frame += 1
                else:
                    raise ValueError("Invalid input")
            frame += 1
    return score