```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit():
            if game[i+1].isdigit():
                score += int(game[i]) + int(game[i+1])
                frame += 1
            else:
                score += int(game[i])
                if frame < 10:
                    score += int(game[i+1])
                    frame += 1
        elif game[i] == 'X':
            score += 10
            frame += 1
        elif game[i] == '/':
            first_roll = 10 - (10 - int(game[:i].count('X')) * 10 - int(game[:i].count('/')) * 10 / 2)
            if game[i+1].isdigit():
                score += 10 + int(game[i+1])
                frame += 1
            else:
                score += 10
                frame += 1
    return score