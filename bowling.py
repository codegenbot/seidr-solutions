```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(len(game)):
        if game[i].isdigit():
            strike = False
            spare = False
            if i < len(game) - 2 and game[i+1].isdigit() and game[i+2].isdigit():
                score += int(game[i]) + int(game[i+1]) + int(game[i+2])
                frame += 3
                continue
            elif i < len(game) - 1 and game[i+1].isdigit():
                if game[i] == 'X':
                    score += 10 + int(game[i+1])
                    frame += 2
                else:
                    score += int(game[i]) + int(game[i+1])
                    frame += 2
            elif i < len(game) - 1 and game[i+1] == '/':
                score += 10 + int(game[i+2])
                frame += 2
            elif game[i] == 'X':
                strike = True
                score += 10
                frame += 1
            else:
                score += 10
                frame += 1
        if strike and i < len(game) - 1:
            if game[i+1].isdigit():
                score += int(game[i+1])
            else:
                score += 10
        elif spare and i < len(game) - 1:
            if game[i+1].isdigit():
                score += int(game[i+1])
            else:
                score += 10
    return score