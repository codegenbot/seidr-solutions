```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(len(game)):
        if game[i] == 'X':
            score += 30
            frame += 1
        elif game[i] == '/':
            score += 10 + int(game[:i].count('X')) * 10
            frame += 1
        else:
            if i < len(game) - 1 and game[i+1] != 'X' and game[i] != '/':
                score += int(game[i]) + int(game[i+1])
                i += 1
            elif i == len(game) - 1 or (i < len(game) - 1 and game[i+1] == 'X'):
                score += int(game[i]) * 2
            else:
                score += int(game[i]) * 2 + int(game[i+1])
            frame += 1
    return score