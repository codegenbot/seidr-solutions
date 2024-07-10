```
def bowling_score(game):
    score = 0
    roll = 0
    frames = game.upper().split('/')
    for frame in frames:
        if 'X' in frame:
            if len(frame) == 1:
                score += 10
                roll += 1
            else:
                first_roll = int(frame[0])
                score += first_roll + int(frames[frames.index(frame)+1].split()[0]) + int(frames[frames.index(frame)+2].split()[0])
                if len(frames) > frames.index(frame)+3:
                    next_roll = int(frames[frames.index(frame)+3].split()[0])
                    score += next_roll
                    roll += 1
                else:
                    while roll < 10:
                        score += 10
                        roll += 1
        elif '/' in frame and len(frame) > 2:
            first_two_rolls = list(map(int, frame.split()))
            if sum(first_two_rolls) == 10:
                score += sum(first_two_rolls)
                roll += 2
                if len(frames) > frames.index(frame)+1:
                    next_roll = int(frames[frames.index(frame)+1].split()[0])
                    score += next_roll
                    roll += 1
            else:
                score += sum(first_two_rolls)
                roll += 2
        elif len(frame) == 2:
            first_two_rolls = list(map(int, frame.split()))
            score += sum(first_two_rolls)
            roll += 2
        else:
            score += int(frame)
            roll += 1
    return score