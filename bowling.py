def bowling_score(games):
    score = 0
    game = [0] * 3
    for i in games:
        if i == "X":
            game[2] += 10
            score += sum(game)
            game = [0] * 3
        elif i == "/":
            game[1] = 10 - int(games[games.index(i) - 1])
            score += 10 + sum(game)
            game = [0] * 3
        else:
            if len(games) > i + 2 and games[i + 2] == "X" or games[i + 2] == "/":
                game[0] = int(i)
                game[1] = 10 - int(i)
                score += sum(game) + 10
                game = [0] * 3
            else:
                game[0] = int(i)
                if len(games) > i + 1 and games[i + 1].isdigit():
                    game[1] = int(games[i + 1])
                score += sum(game)
                game = [0] * 3
    return score