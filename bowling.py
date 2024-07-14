def bowling_score(games):
    score = 0
    frame = 1
    for game in games + [""]:
        if game == "X":
            score += 30
            frame += 1
        elif game == "/":
            score += 10
            frame += 1
        else:
            strike = False
            if game[0] == "X":
                strike = True
                game = game[1:]
            if len(game) == 2 and game[0] != "X" and game[1] != "/":
                score += int(game[0]) + 10
                frame += 1
            else:
                for i in range(1, 4):
                    if str(i) in game:
                        if strike:
                            score += 10 + i
                            break
                        elif len(game) == 2 and str(i) == game[0]:
                            score += int(str(i)) + 10
                            frame += 1
                            break
                        else:
                            score += int(str(i))
                    else:
                        if i == 3:
                            score += 10
                if strike:
                    frame -= 1
    return score