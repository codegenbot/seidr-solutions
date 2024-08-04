def bowling_score(games):
    score = 0
    game = ""
    for char in games:
        if char.isdigit():
            game += char
        else:
            if len(game) == 1:
                score += int(game)
            elif game[0] == "X":
                score += 30
            elif game[0] == "/":
                score += 10 + int(game[1:])
            game = ""
    if len(game) == 1:
        score += int(game)
    elif game[0] == "X":
        score += 30
    elif game[0] == "/":
        score += 10 + int(game[1:])
    return score