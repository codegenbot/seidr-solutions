def bowling_score(game):
    score = 0
    for i in range(10):
        if "/" in game[i * 2 : i * 2 + 2]:
            strike = False
            if game[i * 2] == "X":
                strike = True
            if game[i * 2 + 1] == "X" or game[i * 2 + 1] == "/":
                score += 10 + (10 - int(game[i * 2])) if not strike else 10 + 10
            elif game[i * 2 + 1] == "5":
                score += 15 if not strike else 15
            else:
                score += 10 + int(game[i * 2])
        else:
            score += sum([int(x) for x in game[i * 2 : i * 2 + 2]])
    return score