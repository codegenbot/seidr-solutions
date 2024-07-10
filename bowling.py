def bowling_game(game):
    score = 0
    frame = 1
    for i in range(len(game)):
        if game[i] == "X":
            if frame < 10:
                score += 30
            else:
                score += 10
            frame += 1
        elif game[i] == "/":
            strike = 0
            while i < len(game) and (game[i] != "/" or not strike):
                if game[i] == "X":
                    score += 30
                    strike = 1
                else:
                    score += int(game[i])
                i += 1
            frame += 1
        else:
            score += int(game[:i])
            if len(game[i:]) >= 2 and game[i : i + 2] == "X0":
                score += 20
                i += 2
            elif (
                len(game[i:]) >= 3
                and game[i : i + 3].isdigit()
                and int(game[i : i + 3]) <= 10
            ):
                score += int(game[i : i + 3])
                i += 3
            else:
                score += int(game[i])
            frame += 1
    return score