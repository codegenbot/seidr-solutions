```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit() and game[i+1].isdigit():
            strike = False
            if game[i] == 'X':
                strike = True
                score += 10
            else:
                score += int(game[i])
            if frame < 9:
                if i + 3 <= len(game):
                    if game[i+2].isdigit() and game[i+1].isdigit():
                        spare = False
                        if game[i+1] == '/':
                            score += 10 - int(game[i])
                            frame += 1
                        else:
                            score += 10 - int(game[i]) + int(game[i+1])
                            frame += 2
                    elif i + 3 < len(game) and game[i+3].isdigit():
                        if game[i] == 'X':
                            strike = True
                        score += int(game[i+1]) + int(game[i+2])
                        frame += 1
        else:
            if game[i] == '/':
                spare = True
                score += 10 - int(game[i-1])
                frame += 1
            elif i < len(game) and game[i+1].isdigit():
                if strike:
                    score += 10 + int(game[i])
                    frame += 1
                else:
                    score += 10 + int(game[i])
                    frame += 1
    return score