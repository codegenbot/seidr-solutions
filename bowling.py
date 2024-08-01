```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i] == 'X':
            score += 10 + (10 - int(game[i+1])) * 2
        elif game[i] == '/':
            first_roll = 10 - int(game[i+1])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
        else:
            first_roll = int(game[i:i+2])
            if frame < 9 and (game[i+2] == 'X' or game[i+4] == '/'):
                score += first_roll + 10
            elif frame < 9 and first_roll < 10:
                score += first_roll
                frame += 1
            else:
                score += first_roll
        if frame == 10:
            break
    return score