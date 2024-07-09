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
            if first + second < 10:
                score += first + second
                roll += 1
            else:
                score += first + 10
                roll += 1
        else:
            first, second = map(int, frame[:2])
            if first + second == 10:
                score += first + int(frame[2])
                roll += 1
            elif first + second < 10:
                score += first + second
                roll += 1
            else:
                score += 10 + int(frame[2])
                roll += 1
    return score