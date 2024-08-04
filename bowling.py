```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i] == 'X':
            if frame < 10:
                score += 30
            else:
                score += 10
            frame += 1
        elif game[i].isdigit():
            if int(game[i]) + int(game[i+1]) == 10:
                if frame < 9:
                    score += 10
                else:
                    score += int(game[i]) + 10
                frame += 1
            else:
                score += int(game[i]) + int(game[i+1])
                frame += 1
        elif game[i] == '/':
            score += 10
            frame += 1
    return score