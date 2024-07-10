def bowling_score(game):
    score = 0
    frame = 1
    for i in range(len(game)):
        if game[i].isdigit():
            if int(game[i]) == 10:
                score += 10 + (
                    10 if i + 2 < len(game) and game[i + 1 :].startswith("X") else 0
                )
                frame += 1
            elif int(game[i]) == 9 and "X" in game[i:]:
                score += 9 + (
                    10 if i + 3 < len(game) and game[i + 1 : i + 4] == "XXX" else 0
                )
                frame += 1
            else:
                score += int(game[i])
        elif game[i] == "X":
            score += 10
            frame += 1
        elif game[i] == "/":
            if frame < 9:
                score += 10 - int(game[i - 1])
            frame += 1
    return score