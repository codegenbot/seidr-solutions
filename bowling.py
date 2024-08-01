```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i] == 'X':
            if frame < 10:
                score += 30
            else:
                score += 10
            frame += 1
        elif game[i:i+2] == 'XX':
            score += 20
            frame += 1
        elif game[i].isdigit():
            if int(game[i]) + int(game[i+1]) >= 10:
                score += 10 + (10 - int(game[i]) - int(game[i+1]))
            else:
                score += int(game[i]) + int(game[i+1])
            frame += 1
    return score