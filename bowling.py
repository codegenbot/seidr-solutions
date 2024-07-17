```
def bowling_score(game):
    score = 0
    frame = 1
    while frame <= len(game):
        if game[frame - 1] == 'X':
            score += 30
            frame += 1
        elif game[frame - 1] == '/':
            score += 10 + int(game[:frame].count('X')) * 10
            frame += 2
        else:
            strike = True
            for i in range(frame, len(game)):
                if game[i] != 'X' and (game[i] == '/' or not game[i].isdigit()):
                    score += 10 + int(game[:i].count('X')) * 10
                    frame = i + 1
                    strike = False
                    break
            if strike:
                score += 30
        frame += 1
    return score