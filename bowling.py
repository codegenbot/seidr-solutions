```
def bowling_score(game):
    frames = game.split('/')
    score = 0
    for i in range(len(frames)):
        if frames[i] == 'X':
            if i < 9:
                score += 30
            else:
                score += 10 + 10 * int(frames[i-1])
        elif len(frames[i]) == 2 and int(frames[i]):
            score += 10 + int(frames[i])
        elif len(frames[i]) == 1 or frames[i] == '0':
            score += 10
        else:
            if i < 9:
                score += min(int(frames[i]), 10)
            else:
                score += int(frames[i])
    return score