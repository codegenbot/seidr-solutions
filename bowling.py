```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i] == 'X':
            score += 10
            if i < 18 and game[i+2] == 'X':
                score += 10
            elif i+1 < len(game) and game[i+1] == '/':
                score += 10 - int(game[i-1])
            frame += 1
        elif game[i] == '/':
            first_roll = 10 - int(game[i-1])
            score += first_roll + int(game[i-1])
            frame += 1
        else:
            first_roll = int(game[i])
            if i+1 < len(game) and game[i+1] == 'X':
                score += 10 + first_roll
                frame += 1
            elif i+1 < len(game) and game[i+1] == '/':
                score += first_roll + (10 - first_roll)
                frame += 1
            else:
                score += 2*first_roll
                frame += 1
    return score