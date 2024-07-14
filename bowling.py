```
def bowling_score(game):
    score = 0
    frame = 1
    i = 0
    while i < len(game):
        if game[i] == 'X':
            score += 10
            if i + 2 < len(game) and game[i+1] != '/':
                score += int(game[i+1]) + int(game[i+2])
            else:
                score += 10
            frame += 1
        elif game[i] == '/':
            score += 5
            i += 1
            if game[i].isdigit():
                score += int(game[i])
            else:
                score += 10
            frame += 1
        else:
            first_roll = int(game[i])
            i += 1
            if i < len(game) and game[i] == 'X':
                score += first_roll + 10
                frame += 1
            elif i < len(game) and game[i] != '/':
                second_roll = int(game[i])
                if first_roll + second_roll <= 10:
                    score += first_roll + second_roll
                else:
                    score += 10 + (10 - first_roll)
                frame += 1
    return score