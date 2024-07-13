```
def bowling_score(game):
    score = 0
    roll = 0
    frame = 1
    while frame <= 10:
        if game[roll:roll+2] in ['XX', 'XY', 'XZ']:
            score += 10
            roll += 2
            frame += 1
        elif game[roll] == 'X':
            score += 10
            roll += 3
            frame += 1
        else:
            if game[roll:roll+1].isdigit():
                score += int(game[roll])
                roll += 1
            if game[roll:roll+2].isdigit():
                score += int(game[roll:roll+2])
                roll += 2
            frame += 1
    return score