```
def bowling_score(game):
    score = 0
    frame = 1
    i = 0
    while i < len(game):
        if game[i] == 'X':
            score += 10
            if i < len(game) - 1 and (game[i+1] == 'X' or game[i+1] == '/'):
                i += 2
            else:
                i += 1
            frame += 1
        elif game[i] == '/':
            first_roll = int(game[i-1])
            score += first_roll + 10 - first_roll
            i += 2
            frame += 1
        else:
            first_roll = int(game[i])
            if i < len(game) - 1 and game[i+1] == 'X':
                score += 10 + first_roll
                i += 2
                frame += 1
            elif i < len(game) - 1 and game[i+1] == '/':
                score += first_roll + 10 - first_roll
                i += 2
                frame += 1
            else:
                if i < len(game) - 1 and game[i+1] == 'X':
                    score += first_roll + 10
                    i += 2
                elif i < len(game) - 1 and game[i+1] == '/':
                    score += 2*first_roll
                    i += 2
                else:
                    score += 2*first_roll
                    i += 2
    return score