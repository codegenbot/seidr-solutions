```
def bowling_score(game):
    score = 0
    frame = 1
    i = 0
    while i < len(game):
        if game[i] == 'X':
            score += 10
            i += 1
            if i < len(game) and game[i] == 'X':
                score += 10
                i += 1
            elif i + 1 < len(game) and game[i+1] in ['/X']:
                score += int(game[i+1].replace('/','')) + 5
            else:
                if frame < 9:
                    score += int(game[i+1])
                frame += 1
        elif game[i] == '/':
            first_roll = 10 - int(game[i+1].replace('/',''))
            score += first_roll + int(game[i+1].replace('/',''))
            i += 2
            frame += 1
        else:
            if i < len(game) - 1 and game[i] == str(10 - int(game[i+1])):
                score += 10
                i += 2
            else:
                first_roll = int(game[i])
                if i + 1 < len(game) and game[i+1] in ['/X']:
                    second_roll = int(game[i+1].replace('/','')) + 5
                    score += first_roll + second_roll
                else:
                    score += first_roll + int(game[i+1])
                frame += (game[i+2] == 'X')
                i += 2
    return score