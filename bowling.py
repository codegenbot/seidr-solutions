def bowling_score(game):
    score = 0
    roll = 1
    game += '/X'  
    while '/' in game:
        if game[0] == 'X':
            score += 10
            game = game[2:]
        elif game[0] == '/':
            score += 10
            game = game[1:]
            roll += 1
        else:
            first, second = map(int, game[:2])
            if first + second == 10:
                score += first + second
                game = game[2:]
            elif first >= 10:
                score += 10
                game = game[1:]
            else:
                score += first + second
                game = game[2:]
        roll += 1
    if len(game) > 0 and game[0] == 'X':
        score += 10
    return score