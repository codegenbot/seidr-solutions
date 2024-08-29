```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit():
            strike = False
            if i + 3 <= len(game) and game[i+1].isdigit() and game[i+2].isdigit():
                spare = True
            else:
                spare = False
            if game[i] == 'X':
                strike = True
            elif game[i+1] == '/':
                first_roll = int(game[i])
                second_roll = 10 - first_roll
                score += 10 + first_roll
            else:
                first_roll = int(game[i])
                second_roll = int(game[i+1]) - first_roll
                score += first_roll + second_roll
            if strike:
                score += 10
                frame += 1
            elif spare:
                score += 10
                frame += 1
        else:
            frame += 1
    return score