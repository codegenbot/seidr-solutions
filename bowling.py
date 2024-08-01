```
def bowling_score(game):
    frames = game.split('/')
    score = 0
    for i in range(len(frames)):
        if len(frames[i]) == 1 or (i < 9 and len(frames[i]) + len(frames[i+1]) > 2):
            if len(frames[i]) == 'X':
                score += 10
            elif frames[i] == '0':
                score += 10
            else:
                score += int(frames[i])
        else:
            score += int(frames[i])
    return score