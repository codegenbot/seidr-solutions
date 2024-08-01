```
def bowling_score(game):
    score = 0
    roll = 0
    frames = game.split('/')
    for frame in frames:
        if len(frame) == 1 or (len(frame) == 2 and frame[0] != 'X'):
            score += 10 - int(frame)
        else:
            if 'X' in frame:
                if len(frame) > 1:
                    roll = int(frame[:-1])
                else:
                    roll = 10
            elif frame[0] == 'S':
                roll = 5
            score += roll
    return score