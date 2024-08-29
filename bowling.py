def bowling_score(game):
    score = 0
    frame = 1
    while len(game) > 0 and frame <= 10:
        if game[0] == "X":
            score += 30
            game = game[1:]
            frame += 1
        elif "/" in game[:2]:
            a, b = map(int, re.findall("\d", game[:2]))
            score += a + (b if b > 0 else 10)
            game = game[2:]
            frame += 1
        else:
            a = int(game[0])
            score += a
            game = game[1:]
            if len(game) >= 2 and game[:2] == "//" + str(a):
                game = game[2:]
            elif a < 10:
                score += 10 - a
                frame += 1
    return score