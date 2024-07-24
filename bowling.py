```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i] == 'X':
            score += 10 + (10 - int(game[i+1])) * (frame < 10)
        elif game[i:i+2] == 'XX':
            score += 20 - int(game[i])
        else:
            if frame < 10 and int(game[i]) + int(game[i+1]) >= 10:
                score += 10
                frame += 1
            else:
                score += int(game[i]) + int(game[i+1])
        frame = min(frame + 1, 10)
    return score