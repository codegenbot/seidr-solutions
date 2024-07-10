```
def bowling_score(game):
    score = 0
    roll = 1
    frames = game.split('/')
    for frame in frames:
        if 'X' in frame.upper():
            if len(frame) == 1:
                score += 10
            else:
                first_roll = int(frame[0])
                next_rolls = list(map(int, frames[frames.index(frame)+1].split() + frames[frames.index(frame)+2].split()))
                score += first_roll + sum(next_rolls)
        elif '/' in frame and len(frame) > 2:
            first_two_rolls = list(map(int, frame.split()))
            if sum(first_two_rolls) == 10:
                score += sum(first_two_rolls)
                next_roll = int(frames[frames.index(frame)+1].split()[0])
                score += next_roll
            else:
                score += sum(first_two_rolls)
        elif len(frame) == 2:
            first_two_rolls = list(map(int, frame.split()))
            score += sum(first_two_rolls)
        else:
            score += int(frame)
        roll += 1

    if roll < 10:  
        return 100
    return score