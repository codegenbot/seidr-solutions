```
def bowling_score(game):
    score = 0
    roll = game.replace('/', '').split('X')
    for i, frame in enumerate(roll):
        if len(frame) > 0:
            if len(frame) == 1: 
                score += 10 + (int(roll[i+1]) if i < 9 else 10)
            elif '-' not in frame: 
                score += int(frame) + (int(roll[i+1]) if len(roll) > i + 1 else 0)
            else: 
                split_roll = map(int, frame.split('-'))
                score += sum(split_roll) + (int(roll[i+1]) if i < 8 else 10)
    return score