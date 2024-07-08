def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i] == "X":
            score += 10 + (10 if frame < 9 and game[i + 2].isdigit() else 0)
            frame += 1
        elif game[i : i + 2] == "XX":
            score += 20
            frame += 1
        elif game[i].isdigit():
            first = int(game[i])
            second = int(game[i + 1]) if i + 1 < len(game) else 10
            if second == 10:
                score += first + 10
                frame += 1
            else:
                score += first + second
                frame += second == 0
        elif game[i] == "-":
            score += 10 + int(game[i + 1])
            frame += 1
    return score