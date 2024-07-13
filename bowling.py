```
def bowling_score(game):
    score = 0
    game += '/' * (len(game) % 2)
    for i in range(0, len(game), 2):
        if game[i] == 'X':
            score += 30
        elif game[i] == '/':
            score += 10 - int(game[i-1])
        else:
            score += int(game[i:i+2])
    return score