def bowling_score(games):
    score = 0
    game = []

    for i in games:
        if i.isdigit():
            game.append(int(i))
        else:
            if sum(game) >= 10:
                score += min(10, sum(game)) * 10
            elif len(game) == 2 and game[0] + game[1] == 10:
                score += 10 * (len(game) + 1)
            else:
                score += sum(game) * 10
            game = []

    if sum(game) >= 10:
        score += min(10, sum(game)) * 10
    elif len(game) == 2 and game[0] + game[1] == 10:
        score += 10 * (len(game) + 1)
    else:
        score += sum(game) * 10

    return score