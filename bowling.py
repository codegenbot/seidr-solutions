def bowling_score(game):
    score = 0
    frame = 1
    i = 0
    while i < len(game):
        if game[i] == 'X':
            if i < len(game) - 1 and game[i+1] in ['X', '/']:
                score += 10 + (10 if game[i+2] == 'X' else 0)
            elif i < len(game) - 1:
                score += 10
            frame += 1
            i += 1
        elif game[i] == '/':
            first_roll = int(game[i-1])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame += 1
            i += 2
        else:
            first_roll = int(game[i])
            if i < len(game) - 1 and game[i+1] == 'X':
                score += 10 + first_roll
                frame += 1
                i += 2
            elif i < len(game) - 1 and game[i+1] == '/':
                score += first_roll + (10 - first_roll)
                frame += 1
                i += 2
            else:
                score += 2*first_roll
                frame += 1
                i += 1
    return score