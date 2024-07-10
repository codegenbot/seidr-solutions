```
def bowling_score(game):
    score = 0
    roll = 0
    game = game.upper().replace('/', '')
    frames = [game[i:i+2] for i in range(0, len(game), 2)]
    
    for frame in frames:
        if len(frame) == 1:
            score += 10
            roll += 1
        elif 'X' in frame:
            if roll < 2:
                score += 10
                roll += 1
            else:
                first_roll = int(frames[frames.index(frame)-1].split()[0])
                score += 10 + first_roll
                roll += 2
        else:
            first_two_rolls = list(map(int, frame.split()))
            if sum(first_two_rolls) == 10:
                score += sum(first_two_rolls)
                roll += 2
            elif 'X' in frame or len(frame) > 1:
                score += 10
                roll += 1
            else:
                score += sum(first_two_rolls)
                roll += 2
    return score