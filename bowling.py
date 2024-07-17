```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i] == 'X':
            score += 10 + (10 if i < 18 and game[i+2] == 'X' else 0)
            frame += 1
        elif game[i] == '/':
            first_roll = int(game[i-1])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame += 1
        else:
            first_roll = int(game[i])
            if i < 18 and game[i+2] == 'X':
                score += first_roll + 10
            elif game[i+1] == '/':
                score += first_roll + (10 - int(game[i+1]))
            else:
                second_roll = int(game[i+1])
                score += first_roll + second_roll
            frame += (game[i+2:] == 'X/X' or game[i+2:] == 'XX') and 1 or 0
    return score