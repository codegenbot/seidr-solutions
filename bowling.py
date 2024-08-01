```
def bowling_score(game):
    score = 0
    frame = 1
    roll = 0
    
    for i in range(0, len(game), 2):
        if game[i] == 'X':
            score += 10 + (10 - int(game[roll+1])) if roll > 0 and game[roll+1] != '/' else 10
            frame += 1
        elif game[i] == '/':
            first_roll = 10 - int(game[roll+1])
            score += first_roll + (10 - first_roll) if roll > 0 else first_roll
            frame += 1
        else:
            score += int(game[i]) + int(game[roll+1])
            frame += (int(game[i]) + int(game[roll+1])) == 10 and not game.startswith('X')
        roll += 2
    
    return score