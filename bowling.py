```
def bowling_score(game):
    score = 0
    roll = 0
    game = game.replace('/-', '/0')
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
            first, second, third = map(int, frame[:3])
            if first + second == 10:
                score += first + second
                roll += 1
            elif first + second < 10:
                score += first + second
                roll += 1
            else:
                score += 10 + third
                roll += 2
    return score