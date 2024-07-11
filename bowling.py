```
def bowling_score(game):
    score = 0
    roll = 0
    frames = game.upper().split('/')
    for frame in frames:
        if len(frame) == 1:
            score += 10
            roll += 1
        elif 'X' in frame:
            if roll < 1:
                score += 10
                roll += 1
            else:
                first_roll = int(frames[frames.index(frame)-1].split()[0])
                if first_roll == 10:
                    score += 20
                else:
                    score += 10 + first_roll
                roll += 2
        elif '/' in frame and len(frame) > 2:
            first_two_rolls = list(map(int, frame.split()))
            if sum(first_two_rolls) == 10:
                score += sum(first_two_rolls)
                roll += 2
            else:
                score += sum(first_two_rolls)
                roll += 2
        elif len(frame) == 2:
            first_two_rolls = list(map(int, frame.split()))
            if sum(first_two_rolls) > 10:
                score += 10
                roll += 1
            else:
                score += sum(first_two_rolls)
                roll += 2
    return score