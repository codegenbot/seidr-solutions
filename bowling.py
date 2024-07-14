def bowling_score(game):
    score = 0
    frame = 1
    i = 0
    while i < len(game):
        if game[i] == 'X':
            score += 10
            if i + 2 < len(game) and game[i+1] in ['X', '/']:
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
            if game[i] == 'X' and game[i+1] == 'X':
                score += 10 + 10
                frame += 1
                i += 2
            elif game[i] == 'X':
                score += 10 + int(game[i+1])
                frame += 1
                i += 2
            else:
                first_roll = int(game[i])
                if game[i+1] in ['X', '/']:
                    score += first_roll + 10
                else:
                    score += first_roll + int(game[i+1])
                if game[i+2] == 'X':
                    frame += 1
                    i += 3
                else:
                    frame += 1
                    i += 2
    return score