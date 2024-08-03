Here is the solution:

def bowling_score(game):
    score = 0
    roll = 0
    frames = game.split('/')
    for frame in frames:
        if frame == 'X':
            score += 10 + (10 - roll)
            roll = 0
        elif frame[0] == 'X':
            score += 10 + int(frame[1:])
            roll = 0
        else:
            score += sum(map(int, frame))
            roll += sum(map(int, frame))
        if len(frame) == 2 and frame[1] == '-':
            break
    return score