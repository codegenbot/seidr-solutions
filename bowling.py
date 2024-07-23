```
def bowling_score(game):
    score = 0
    roll = 0
    rolls = 0
    
    for frame in game.split('/'):
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) == 2:
            if int(frame[0]) == 10:
                score += 10 + 10
                roll += 2
            else:
                score += sum(map(int, frame))
                roll += 2
        else:
            ones, twos = map(int, frame)
            if ones == 10:
                score += ones + twos
                roll += 2
            elif twos == 10:
                score += ones + 10
                roll += 2
            else:
                score += ones + twos
                roll += 2
    
    return score