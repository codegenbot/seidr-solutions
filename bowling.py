def bowling_score(game):
    score = 0
    roll = 0
    frame = 1

    for char in game:
        if char == "X":
            score += 30
            roll += 10
        elif char == "/":
            continue
        else:
            strike = False
            if char == "X" or (char.isdigit() and int(char) > 0):
                if frame < 9 and game[game.index(char) + 1] == "/":
                    score += 20 + int(char)
                    roll += int(char)
                    frame += 1
                else:
                    score += int(char)
                    roll += int(char)
            else:
                strike = True

        if frame < 10:
            if char.isdigit() and int(char) > 0:
                score += int(char)
                roll += int(char)
            elif char == "X" or strike:
                continue
            else:
                score += int(game[game.index(char) + 1])
                roll += int(game[game.index(char) + 1])
                frame += 1

    return score