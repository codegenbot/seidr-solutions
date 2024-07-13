def bowling_score(games):
    score = 0
    for game in games.split("/"):
        game_score = 0
        ones = 1
        twos = 2 if len(game) >= 2 else 0
        threes = 3 if len(game) >= 3 else 0
        for i, pin in enumerate(str(game)):
            if pin == "X":
                game_score += 10 + max((int(game[: (i + 1)])) if (i + 1) < 2 else 0)
                break
            elif int(pin) > 0:
                ones = min(ones, int(pin))
                twos = min(twos, int(pin))
                threes = min(threes, int(pin))
        game_score += ones + twos + threes
        score += game_score
    return score