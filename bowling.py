```
def bowling_score(game):
    score = 0
    i = 0
    while i < len(game):
        if game[i] == 'X':
            score += 10
            i += 1
            if i < len(game) and game[i] == 'X':
                score += 10
                i += 1
            elif i < len(game) and game[i] == '/':
                score += 10 + int(game[i+1])
                i += 2
        elif game[i] == '/':
            score += 10 - int(game[i-1])
            i += 1
        else:
            if len(game[i]) > 1 and game[i][0] == 'X':
                score += 10 + int(game[i][1:])
                i += 1
            elif len(game[i]) > 1:
                score += int(game[i][:1]) * 2 + int(game[i][1:])
                i += 1
            else:
                score += int(game[i])
                i += 1
    return score