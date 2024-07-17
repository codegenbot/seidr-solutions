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
            if game[i+1] == 'X':
                first_roll = 10
                second_roll = 10
            elif game[i+1] == '/':
                first_roll = int(game[i])
                second_roll = 10 - first_roll
            else:
                first_roll = int(game[i:i+2].strip())
                second_roll = int(game[i+2].strip())
            
            if first_roll + second_roll == 10:
                score += 10
            elif first_roll == 10:
                score += first_roll + second_roll
            else:
                score += first_roll + second_roll
            
            i += 3
            frame += 1
    return score