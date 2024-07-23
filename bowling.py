def bowling_score(game):
    score = 0
    frame = 1
    i = 0
    while i < len(game):
        if game[i] == 'X':
            if i + 2 < len(game) and game[i+1] in '/X' or i + 3 < len(game):
                score += 10 + int(game[i+1:i+3]) if i + 1 < len(game) and game[i+1] != '/' else int(game[i+1])
            else:
                score += 10
        elif game[i] == '/':
            score += 10 - int(game[i-1])
        else:
            if len(game[i]) > 1 and game[i][0] == 'X':
                score += 10 + int(game[i][1:])
            else:
                score += sum(map(int, list(game[i])))
        i += 1
    return score