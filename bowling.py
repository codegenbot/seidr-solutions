def bowling_score(games):
    score = 0
    game = []
    for char in games:
        if char == "/":
            if sum(game) < 10:
                score += 10 - sum(game)
            else:
                score += sum(game)
            game = []
        elif char.isdigit():
            game.append(int(char))
        else:
            if sum(game) > 0:
                if len(game) == 1:
                    score += game[0]
                elif sum(game) < 10:
                    score += 10 - sum(game)
                else:
                    score += sum(game)
            game = []
    return score