```
def bowling_score(game):
    score = 0
    roll = game.split('/')
    i = 0
    while i < len(roll):
        if roll[i] == 'X':
            score += 10 + int(roll[(i+1) % len(roll)])
            i += 2
        elif '-' in roll[i]:
            split_roll = map(int, roll[i].split('-'))
            score += sum(split_roll)
            i += 2
        else:
            score += int(roll[i]) + int(roll[(i+1) % len(roll)])
            i += 2
    return score