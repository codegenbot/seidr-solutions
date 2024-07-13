```
def bowling_score(game):
    score = 0
    frame = 1
    while frame <= 10:
        if game[frame - 1] == 'X':
            score += 30
            frame += 1
        elif game[frame - 1].isdigit() and len(game[frame - 1]) == 2:
            score += int(game[frame - 1][0]) + int(game[frame - 1][1])
            frame += 1
        else:
            if '/' in game[frame - 1]:
                parts = game[frame - 1].split('/')
                score += int(parts[0])
                frame += 1
            else:
                score += int(game[frame - 1])
                frame += 1
    return score