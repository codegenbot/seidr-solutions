```
def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) == 2:
            first, second = map(int, frame)
            score += first + second
            roll += 1
        else:
            first, second = map(int, frame[:2])
            score += first + second
            if first + second == 10:
                roll += 1
                score += next(game[3:].split('/')[0]) or 10
            else:
                third = int(frame[2])
                score += third
                roll += 1
    return score