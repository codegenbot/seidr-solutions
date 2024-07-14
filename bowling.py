def bowling_score(games):
    score = 0
    game = []
    for i in range(len(games)):
        if games[i].isdigit():
            game.append(int(games[i]))
        else:
            if len(game) < 2:
                return 0
            if sum(game) >= 10:
                score += 10 + (10 - sum(game))
            else:
                score += sum(game)
            game = []
    if len(game) > 1 and sum(game) >= 10:
        score += 10 + (10 - sum(game))
    elif len(game) == 2:
        score += sum(game)
    return score