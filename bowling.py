```
def bowling_score(game):
    score = 0
    frame = 1
    i = 0
    while i < len(game):
        if game[i] == 'X':
            score += 10
            if i + 2 < len(game) and (game[i+1].isdigit() or game[i+1] == '/'):
                if game[i+1].isdigit():
                    score += int(game[i+1])
                else:
                    score += 10
            frame += 1
        elif game[i] == '/':
            score += 5
            i += 1
            if i + 1 < len(game) and game[i].isdigit():
                score += int(game[i])
            frame += 1
        else:
            strike = False
            spare = False
            for j in range(2):
                if game[i].isdigit():
                    score += int(game[i])
                elif game[i] == 'X':
                    score += 10
                    strike = True
                elif game[i] == '/':
                    score += 5
                    spare = True
                i += 1
            if not strike and not spare:
                frame += 1
    return score