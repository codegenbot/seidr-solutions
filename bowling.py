```
def bowling_score(game):
    score = 0
    frame = 1
    i = 0
    while i < len(game):
        if game[i] == 'X':
            score += 10
            if frame < 9:
                score += int(game[i+2]) + int(game[i+3])
            frame += 1
            i += 2
        elif game[i] == '/':
            first_roll = int(game[i-1])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame += 1
            i += 2
        else:
            if game[i+1] == 'X':
                score += int(game[i]) + 10
                frame += 1
                i += 2
            elif game[i+1] == '/':
                score += int(game[i]) + (10 - int(game[i]))
                frame += 1
                i += 2
            else:
                score += int(game[i]) + int(game[i+1])
                if game[i+2] == 'X' or game[i+2] == '/':
                    frame += 2
                else:
                    frame += 1
                i += 2
    return score