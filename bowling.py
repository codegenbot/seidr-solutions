```
def bowling_score(game):
    score = 0
    roll = 0
    frames = game.upper().split('/')
    for frame in frames:
        if 'X' == frame:
            score += 10
            roll += 1
        elif len(frame) == 2:
            first_two_rolls = list(map(int, frame.split()))
            if sum(first_two_rolls) > 10:
                score += 10
            else:
                score += sum(first_two_rolls)
            roll += 2
        elif len(frame) == 1:
            score += 10
            roll += 1
    return score