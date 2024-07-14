```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(len(game)):
        if game[i].isdigit():
            strike = False
            spare = False
            while i < len(game) and (game[i].isdigit() or game[i] == '/'):
                if game[i] == '/':
                    break
                if frame < 10:
                    score += int(game[i])
                    if score >= 10:
                        score -= 10
                        break
                else:
                    score += int(game[i])
            if i < len(game) - 1 and game[i+1].isdigit() and not strike and not spare:
                if frame < 10:
                    score += int(game[i+1])
                else:
                    score += int(game[i+1]) // 2
            if game[i] == 'X':
                strike = True
                while i < len(game) - 2 and (game[i].isdigit() or game[i] == '/'):
                    i += 1
            elif game[i] == '-':
                spare = True
                while i < len(game) - 1 and (game[i].isdigit() or game[i] == '/'):
                    i += 1
        frame += 1
    return score