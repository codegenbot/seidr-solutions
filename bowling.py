```
def bowling_score(game):
    score = 0
    frames = game.split('/')
    for i in range(len(frames)):
        if frames[i].isdigit():
            if int(frames[i]) == 10:
                score += 10 + (10 if i < 9 and frames[i+1] != 'X' else 0)
            else:
                score += int(frames[i])
        elif frames[i] == 'X':
            score += 10 + (10 if len(frames) - i > 1 and frames[i+1] == 'X' or int(frames[i+1]) == 10 else 0)
        else:
            continue
    return score