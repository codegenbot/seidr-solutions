Here is the solution:

def bowling_score(game):
    frames = game.split('/')
    score = 0
    for i in range(len(frames)):
        if len(frames[i]) == 1:
            score += 1
        elif len(frames[i]) == 2:
            score += int(frames[i])
        else:
            score += int(frames[i][0]) + int(frames[i][1])
    return score