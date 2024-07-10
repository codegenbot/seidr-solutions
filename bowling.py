```
def bowling_score(game):
    score = 0
    roll = 0
    frames = game.split('/')
    for frame in frames:
        if 'X' in frame.upper():
            if len(frame) == 1:
                score += 10
                roll += 1
            else:
                first_roll = int(frame[0])
                if roll + 2 < 10: 
                    next_frame = frames[frames.index(frame)+1]
                    if 'X' in next_frame.upper():
                        score += first_roll + 10
                        roll += 3
                    elif len(next_frame) > 1:
                        score += first_roll + int(next_frame.split()[0])
                        roll += 3
                    else:
                        score += first_roll + int(next_frame)
                        roll += 2
                else: 
                    score += first_roll + 10
                    roll += 3
        elif '/' in frame and len(frame) > 2:
            first_two_rolls = list(map(int, frame.split()))
            if sum(first_two_rolls) == 10:
                score += sum(first_two_rolls)
                roll += 2
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
    if roll < 10:
        return 100
    return score