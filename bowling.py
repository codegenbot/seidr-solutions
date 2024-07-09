```
def bowling_score(game):
    score = 0
    roll = 0
    frames = game.split('/')
    while frames:
        if len(frames[0]) == 1:
            score += int(frames.pop(0))
            roll += 1
        elif len(frames[0]) == 2:
            first, second = map(int, frames.pop(0).split(' '))
            score += first + second
            roll += 1
        else:
            first, second = map(int, frames.pop(0).split(' ')[:2])
            score += first + second
            if first + second == 10:
                if len(frames) < 2:
                    score += 10
                else:
                    score += int(frames.pop(0))
                roll += 1
            else:
                score += int(frames.pop(0).split(' ')[1])
                roll += 1
    return score