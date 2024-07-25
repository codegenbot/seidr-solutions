Here is the solution in Python:

def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split('/')):
        if len(frame) == 1:  # strike
            score += 10 + next(x for x in frames[frames.index(frame)+1:].split('/'))[0] * 2
        elif len(frame) > 1:  # spare or open frame
            score += sum(map(int, frame))
        else:  # first frame of the game
            score += int(frame)
    return score