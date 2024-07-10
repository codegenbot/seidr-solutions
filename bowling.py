```
def bowling_score(game):
    score = 0
    frame = 1
    for roll in game:
        if roll == 'X':
            score += 10 + (10 if frame < 9 else 0)
            frame += 1
        elif roll == '/':
            score += 10
            frame += 1
        elif roll.isdigit():
            if len(roll) > 1:
                score += int(roll[0]) * 2 + 10
            else:
                score += int(roll)
            frame += (1 if len(roll) == 1 else 0)
        else:
            if roll == 'X' and frame < 9:
                score += 10
            elif roll == '/':
                score += 10
            frame += (1 if roll != '-' else 0)
    return score