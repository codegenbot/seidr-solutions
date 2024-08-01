```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i] == 'X':
            if frame < 10:
                score += 30
            else:
                score += 10
        elif game[i] == '/':
            first_roll = int(game[:i].count('X')) * 10 + int(game[:i].count('/')) * 10 // 2
            second_roll = 10 - first_roll
            score += first_roll + second_roll
        else:
            first_roll = int(game[i])
            if game[i+1] == 'X':
                score += 10 + (10 - int(first_roll))
            elif game[i+1] == '/':
                score += 10 + int(first_roll) + (10 - int(first_roll)) // 2
            else:
                second_roll = int(game[i+1])
                score += first_roll + second_roll
        frame += 1
    return score