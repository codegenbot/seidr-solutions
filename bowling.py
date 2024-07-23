```
def bowling_score(game):
    score = 0
    frame = 1
    i = 0
    while i < len(game):
        if game[i] == 'X':
            score += 10
            frame += 1
            i += 1
        elif game[i].isdigit():
            if game[i+1] == '/':
                first_roll = 10 - int(game[i])
                second_roll = int(game[i])
                if frame < 9:
                    score += first_roll + second_roll + int(game[i+2])
                    frame += 1
                else:
                    score += first_roll + second_roll
            elif game[i+1].isdigit():
                score += int(game[i]) + int(game[i+1])
                frame += 1
                i += 1
            else:
                score += int(game[i])
                if frame < 10:
                    if game[i+1] == 'X':
                        score += 10
                        frame += 1
                        i += 1
                    elif game[i+1].isdigit():
                        score += int(game[i+1])
                        frame += 1
                        i += 2
                else:
                    score += int(game[i])
        i += 1
    return score