```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i] == 'X':
            score += 10 + (10 if frame < 9 and game[i+2].isdigit() else 0)
            frame += 1
        elif game[i] == '/':
            first = int(game[i-1])
            second = 10 - first
            score += first + second
            frame += 1
        else:
            first = int(game[i])
            if game[i+1] == 'X':
                score += first + 10
                frame += 1
            elif game[i+1] == '/':
                score += first + 10 - int(game[i+2])
                frame += 1
            else:
                score += first + second
                frame += 1
    return score