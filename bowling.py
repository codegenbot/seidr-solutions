def bowling_score(game):
    score = 0
    game += " "
    for i in range(10):
        if game[i] == "X":
            score += 30
        elif game[i].isdigit():
            if game[i + 1].isdigit() and int(game[i]) + int(game[i + 1]) <= 10:
                score += 1 * (int(game[i]) + int(game[i + 1]))
            else:
                score += 10 - (10 - int(game[i]))
        elif game[i] == "/":
            if i > 0 and game[i - 1].isdigit():
                score += 10 - (10 - int(game[i - 1]))
    return score