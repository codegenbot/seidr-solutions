```
def bowling_score(game):
    score = 0
    frame = 1
    i = 0
    while i < len(game):
        if game[i].isdigit() and (i + 1 < len(game) and game[i+1].isdigit()):
            if int(game[i]) + int(game[i+1]) == 10:
                score += 10
                frame -= 1
                i += 2
            else:
                score += int(game[i]) + int(game[i+1])
                i += 2
        elif game[i].isdigit():
            if int(game[i]) == 10:
                score += 10
                frame -= 1
                i += 1
            else:
                score += int(game[i])
                i += 1
                if i < len(game) and (game[i] == '/' or game[i] == 'X'):
                    if game[i+1].isdigit():
                        score += int(game[i+1])
                        i += 2
        elif game[i] in ['/', 'X']:
            if game[i] == 'X':
                score += 10
            else:
                score += 5
            frame -= 1
            i += 1
    return score