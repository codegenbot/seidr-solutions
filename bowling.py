```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i] == 'X':
            score += 10 + (10 - int(game[i+1])) if frame < 9 else 10
        elif game[i] == '/':
            score += 10 - int(game[i+1]) + (10 - int(game[i-1])) if frame < 9 else 10
        else:
            score += int(game[i:i+2])
            frame = (frame + 1) % 10 or 10
    return score