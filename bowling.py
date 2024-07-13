```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i] == 'X':
            score += 10 + (10 - int(game[i+1])) if frame < 9 and game[i+2] == '/' else 10
        elif game[i] == '/':
            score += 10 + int(game[i-1])
        else:
            score += int(game[i]) + int(game[i+1])
            frame += (int(game[i]) + int(game[i+1])) >= 10
    return score