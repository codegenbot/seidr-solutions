def bowling_score(game):
    score = 0
    frame = 1
    for i in range(len(game)):
        if game[i].isdigit():
            if (
                len(game[i:]) >= 2
                and game[i : i + 2].isdigit()
                and int(game[i]) + int(game[i + 1]) <= 10
            ):
                score += 10 - int(game[i])
                frame += 1
            elif game[i] == "X":
                score += 10
                frame += 1
            else:
                if i > 0 and game[i - 1] == "/":
                    score += 10 - int(game[i])
                    frame += 1
                else:
                    score += int(game[i])
                    frame += game[i + 1].isdigit() or game[i + 1] == "X"
    return score