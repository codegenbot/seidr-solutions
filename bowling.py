```
def bowling_score(game):
    score = 0
    frame = 1
    i = 0
    while i < len(game):
        if game[i].isdigit() and game[i+1].isdigit():
            if int(game[i]) + int(game[i+1]) == 10:
                if frame < 10:
                    score += 10
                    frame += 1
                elif frame == 10:
                    score += 10
                i += 2
            else:
                score += int(game[i]) + int(game[i+1])
                frame += 1
                i += 2
        elif game[i] == 'X':
            score += 10
            if frame < 9:
                score += int(game[i+2]) + int(game[i+3])
            elif frame == 9:
                score += 10
            frame += 1
            i += 1
        else:
            first_roll = int(game[i])
            i += 1
            if game[i] == '/':
                score += first_roll + 10
            else:
                score += first_roll + int(game[i])
            frame += 1
    return score