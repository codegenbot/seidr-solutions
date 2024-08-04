```
def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1: # strike
            score += 10 + next((int(x) for x in game[game.index(frame)+1:].split('/')[0] if x.isdigit()), 0) + next((int(x) for x in game[game.index(frame)+1:].split('/')[1:] if x.isdigit()), 0)
        elif len(frame) == 2: # spare
            score += 10 + int(frame[0])
            roll = int(frame[1])
        else:
            score += sum(int(x) for x in frame)
    return score