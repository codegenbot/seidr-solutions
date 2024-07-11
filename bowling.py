```
def bowling_score(frames):
    score = 0
    frames = frames.replace('-', '/').split('/')
    for i in range(10):
        if len(frames[i]) == 2:
            score += 20
        elif frames[i] == 'X':
            score += 10
            if i < 9:
                if frames[i+1][0] == 'X':
                    score += 30
                else:
                    score += int(frames[i+1][0]) + 10
        else:
            roll1 = int(frames[i][0])
            roll2 = int(frames[i][1])
            if roll1 + roll2 == 10:
                score += 10 + 10
            else:
                score += roll1 + roll2
    return score