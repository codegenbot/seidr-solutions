```
def bowling_score(game):
    score = 0
    frame = 1
    for bowl in game:
        if bowl == 'X':
            score += 30
            frame -= 1
        elif bowl == '/':
            score += 10 + int(bowl[1]) * 2
            frame -= 1
        else:
            score += int(bowl)
        if frame == 0:
            break
    return score