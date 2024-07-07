```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit() and game[i+1].isdigit():
            strike = False
            spare = False
            if int(game[i]) + int(game[i+1]) == 10:
                spare = True
            elif int(game[i]) == 10:
                score += 10
                frame -= 1
                continue
            score += int(game[i]) + int(game[i+1])
        else:
            strike = True
        if strike:
            score += 10
            frame -= 1
            if i < len(game) - 1 and game[i+2].isdigit() and game[i+3].isdigit():
                score += int(game[i+2]) + int(game[i+3])
            elif i < len(game) - 2 and game[i+2].isdigit() and (game[i+3] == '/' or game[i+3] == 'X'):
                score += int(game[i+2])
        if spare:
            score += 10
    return score