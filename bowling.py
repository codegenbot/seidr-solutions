def bowling_score(game):
    score = 0
    roll = 0
    for i in range(1, 11):
        if "/" in game[i - 1 :]:
            x = int(game[: game.index("/")].count("X"))
            z = len(game) - game.index("/")
            if z < 2:
                score += 10 + (x * 2)
                break
            elif i == 10:
                score += 10 + (z - 2) * 10 + x * 2
        else:
            y = sum(1 for char in game[:i] if char.isdigit())
            z = len(game) - game.index("/")
            if i < 10 and "/" not in game[i:]:
                score += min(y, 3) * 10
            elif i == 10:
                score += min(y + int(z > i - 1), 10) * 10
        roll += 1
    return score