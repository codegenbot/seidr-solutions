```
def bowling_score(game):
    score = 0
    frame = 0
    for i in range(0, len(game), 2):
        if game[i] == 'X':
            if frame < 9:
                score += 30
            else:
                score += 10
        elif game[i] == '/':
            first_roll = int(game[:i].count('X'))
            second_roll = 10 - first_roll
            score += first_roll * 10 + second_roll
            break
        else:
            first_roll = int(game[i])
            if game[i+1] == 'X':
                score += 10 + (10 - int(first_roll))
            elif game[i+1] == '/':
                score += 10 + (10 - int(first_roll)) + int(game[i+2]) * 2
            else:
                score += first_roll + int(game[i+1])
        frame += 1
    return score