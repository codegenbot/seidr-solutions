def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit() and game[i + 1].isdigit():
            if int(game[i]) + int(game[i + 1]) == 10:
                if frame < 9:
                    score += 10
                    continue
                else:
                    if i > 17:
                        score += 10
                    else:
                        score += int(game[i]) + int(game[i + 1])
            elif (
                int(game[i]) + int(game[i + 1]) == 8
                or int(game[i]) + int(game[i + 1]) == 7
            ):
                if frame < 9:
                    score += int(game[i]) + int(game[i + 1])
                    continue
                else:
                    score += int(game[i]) + int(game[i + 1])
            elif int(game[i]) + int(game[i + 1]) > 10:
                score += 10
        else:
            if game[i] == "X":
                score += 30
                frame += 1
            elif game[i] == "/":
                score += 10
                frame += 1
    return score