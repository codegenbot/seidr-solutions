def bowling_score(game):
    score = 0
    frame = 0
    for i in range(0, len(game), 2):
        if game[i] == 'X':
            score += 10 + (10 if i+1 < len(game) and game[i+1] == 'X' else 0)
            frame += 1
        elif game[i:i+2] == '--*/
    return score