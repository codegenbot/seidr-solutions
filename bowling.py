```
def bowling_score(game):
    score = 0
    frame = 1
    i = 0
    while i < len(game):
        if game[i] == 'X':
            score += 10
            if i + 2 < len(game) and (game[i+1] == 'X' or game[i+1] == '/'):
                score += int(game[i+2:i+4].replace('/', str(10 - int(game[i+1]))))
            elif i + 1 < len(game):
                score += int(game[i+1])
            frame += 1
            i += 3
        elif game[i] == '/':
            score += 10
            if i + 1 < len(game) and game[i+1].isdigit():
                score += int(game[i+1:i+2])
            else:
                score += 10 - int(game[i-1])
            frame += 1
            i += 2
        else:
            if len(game[i]) > 1 and game[i][0] == 'X':
                score += 10 + int(game[i][1:])
                frame += 1
                i += 3
            elif len(game[i]) > 1:
                score += int(game[i][0]) * 2 + int(game[i][1:])
                frame += 1
                i += 2
            else:
                score += int(game[i])
                frame += 1
                i += 1
    return score