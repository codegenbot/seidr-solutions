```
def bowling_score(games):
    frames = [list(map(int, game)) for game in games.split('/')]
    score = 0
    i = j = 0
    while i < len(frames):
        if len(frames[i]) == 1:
            score += frames[i][0]
            i += 1
        elif len(frames[i]) == 2 and frames[i][0] + frames[i][1] >= 10:
            score += frames[i][0] + frames[i][1]
            i += 1
        else:
            score += 10
            i += 1
        if i < len(frames) and len(frames[i]) == 2 and frames[i][0] + frames[i][1] >= 10:
            j += 1
            score += frames[i][0] + frames[i][1]
            i += 1
        elif i < len(frames):
            score += frames[i][0]
            i += 1
    return score