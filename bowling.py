def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit() and game[i + 1].isdigit():
            if int(game[i]) + int(game[i + 1]) == 10:
                if frame < 9:
                    score += 10
                else:
                    score += 10
                    break
            elif int(game[i]) + int(game[i + 1]) > 10:
                score += 10 - (int(game[i]) + int(game[i + 1]) - 10)
                frame += 1
            else:
                score += int(game[i]) + int(game[i + 1])
                frame += 1
        elif game[i].isdigit():
            score += int(game[i])
            frame += 1
    return score