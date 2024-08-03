Here is the solution:

def bowling_game(s):
    frames = [list(map(int, frame.split('/'))) if '/' in frame else list(map(int, frame)) for frame in s.split()]
    score = 0
    roll = 0
    for i, frame in enumerate(frames):
        if len(frame) == 1:
            score += 10
        elif len(frame) == 2:
            score += sum(frame)
        else:
            score += 10 + (frame[1] - 1) * 10 + min(frame[0], 10)
        roll += 1
    return score