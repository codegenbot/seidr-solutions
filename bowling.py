```
def bowling_score(game):
    score = 0
    frame = 1
    i = 0
    while i < len(game):
        if game[i] == 'X':
            score += 10
            i += 1
            if frame < 9:
                if game[i] == 'X':
                    score += 10
                elif game[i] == '/':
                    first_roll = 10 - int(game[i+1])
                    score += first_roll
                else:
                    first_roll = int(game[i])
                    score += first_roll + int(game[i+1])
                frame += 1
            else:
                frame += 1
        elif game[i] == '/':
            first_roll = 10 - int(game[i+1])
            score += first_roll
            i += 2
            frame += 1
        else:
            if game[i] == 'X' or game[i+1] == 'X':
                score += 10 + int(game[i+1]) if i+1 < len(game) else 10
                frame += 1
                i += 2
            elif game[i] == '/':
                first_roll = 10 - int(game[i+1])
                score += first_roll
                i += 2
                frame += 1
            else:
                first_roll = int(game[i])
                second_roll = int(game[i+1])
                score += first_roll + second_roll
                i += 2
                frame += 1
    return score