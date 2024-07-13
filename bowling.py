Here is the solution:

def bowling_score(game):
    score = 0
    frames = game.split('/')
    for i in range(len(frames)):
        if len(frames[i]) == 1:
            score += 10 - int(frames[i])
        elif len(frames[i]) == 2:
            score += 10 + (10 - int(frames[i][0])) if int(frames[i][0]) != 10 else 20
        else:
            score += 10 + int(frames[i][0])
    return score