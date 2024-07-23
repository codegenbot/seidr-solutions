```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i] == 'X':
            if i < 18 and game[i+2] == 'X':
                score += 30
            else:
                score += 10
            frame += 1
        elif game[i] == '/':
            first_roll = int(game[i-1])
            second_roll = 10 - first_roll
            if i < 18 and game[i+2] == 'X':
                score += 15 + 10
            else:
                score += first_roll + second_roll
            frame += 1
        else:
            first_roll = int(game[i])
            if i < 18 and game[i+2] == 'X':
                score += 10 + first_roll + 10
            elif i < 18 and game[i+2] == '/':
                score += 10 + first_roll + (10 - first_roll)
            else:
                score += 2*first_roll
            frame += 1
    return score