```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit() and game[i+1].isdigit():
            score += int(game[i]) * 10 + int(game[i+1])
            if frame == 10:
                return score
            frame += 1
        elif game[i] == 'X':
            score += 30
            if frame == 10:
                return score
            frame += 1
        else:
            first, second = map(int, game[i:i+2].split('/'))
            if first + second > 10:
                score += 10 + int(game[i+1])
            else:
                score += first + second
            if frame == 10:
                return score
            frame += 1
    return score