```
def bowling_score(game):
    score = 0
    frame = 1
    i = 0
    while frame <= 10:
        if game[i:i+2] == 'X ':
            score += 30
            i += 2
            frame += 1
        elif game[i] == '/':
            first_roll = int(game[i-1])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            i += 2
            frame += 1
        else:
            if game[i:i+2].strip() == '10':
                score += 10
                i += 2
                frame += 1
            elif int(game[i]) + int(game[i+1]) == 10:
                score += 10
                i += 2
                frame += 1
            else:
                first_roll = int(game[i])
                second_roll = int(game[i+1])
                score += first_roll + second_roll
                i += 2
                frame += 1
    return score