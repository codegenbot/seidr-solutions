```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i] == 'X':
            if frame < 10:
                score += 30
            else:
                score += 10 + int(game[i+1])
            frame += 1
        elif game[i].isdigit():
            pins = int(game[i]) + int(game[i+1])
            if pins == 10:
                score += 10
                frame += 1
            else:
                score += pins
                frame += (pins < 10)
        else:
            if frame < 9:
                if game[i] == '/':
                    score += 10 - int(game[i+1])
                    frame += 1
                elif game[i] == '-':
                    score += 10 - int(game[i-1])
                    frame -= 1
    return score