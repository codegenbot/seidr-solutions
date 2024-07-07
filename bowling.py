```
def bowling_score(game):
    score = 0
    frame = 1
    i = 0
    while i < len(game):
        if game[i].isdigit() and (i+1 < len(game) and game[i+1].isdigit()):
            if int(game[i]) + int(game[i+1]) == 10:
                score += 10
                frame -= 1
                i += 2
            else:
                score += int(game[i]) + int(game[i+1])
                i += 2
        elif game[i] == 'X':
            score += 10
            if i < len(game) - 1 and (game[i+1].isdigit() or game[i+1] == '/'):
                score += int(game[i+1]) + int(game[i+2])
            frame -= 1
            i += 1
        elif game[i] == '/':
            score += 5
            if i < len(game) - 1 and game[i+1].isdigit():
                score += int(game[i+1])
            frame -= 1
            i += 2
        else:
            if game[i].isdigit() and (i+1 < len(game) and game[i+1].isdigit()):
                if int(game[i]) + int(game[i+1]) == 10:
                    score += 10
                    frame -= 1
                    i += 2
                else:
                    score += int(game[i]) + int(game[i+1])
                    i += 2
            else:
                score += 0
                frame -= 1
                i += 1
    return score