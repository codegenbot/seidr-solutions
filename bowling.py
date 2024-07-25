```
def bowling_score(game):
    score = 0
    roll = 0
    frame = 1
    for char in game + 'X':
        if char.isdigit():
            roll += int(char)
        else:
            if roll < 10:
                score += roll
            elif roll == 10:
                score += 10
            else:
                score += 10
            roll = 0
            frame += 1
    return score