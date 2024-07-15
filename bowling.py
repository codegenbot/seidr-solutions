def bowling_score(game):
    score = 0
    frame = 1
    while frame <= 10:
        if game[frame - 1] == "X":
            score += 30
            frame += 1
        elif game[frame - 1].isdigit():
            strike = False
            for i in range(2):
                if i < len(game) and game[frame - 1 + i].isdigit():
                    if int(game[frame - 1] + game[frame]) == 10:
                        score += 10
                        strike = True
                        break
                    else:
                        score += int(game[frame - 1] + game[frame])
                elif i < len(game) and game[frame - 1 + i].isdigit():
                    score += int(game[frame - 1 + i])
            if not strike:
                frame += 2
        else:
            for i in range(3):
                if i < len(game) and game[frame - 1 + i].isdigit():
                    if int(game[frame - 1] + game[frame]) == 10:
                        score += 10
                        break
                    else:
                        score += int(game[frame - 1] + game[frame])
            frame += 1
    return score