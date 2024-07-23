def bowling_score(game):
    score = 0
    roll = game.split('/')
    for i in range(0, len(roll), 2):
        if roll[i].startswith('X'):
            score += 10 + int(roll[i+1])
        elif '-' not in roll[i]:
            score += int(roll[i]) + int(roll[i+1])
        else:
            split_roll = map(int, roll[i].split('-'))
            score += sum(split_roll) + int(roll[i+1])
    return score