```
def bowling_score(game):
    score = 0
    frame = 0
    for roll in game.replace('/', ''):
        if roll.isdigit():
            if len(roll) == 1:
                score += 10
                frame += 1
            else:
                score += int(roll)
                frame += 1
        elif roll == 'X':
            score += 10
            frame += 1
        elif roll in ['-', '/']:
            if frame < 9:
                score += 10
                frame += 1
    return score