Here is the solution in Python:

def bowling_score(s):
    frames = [list(map(int, frame.split('/'))) if '/' in frame else [int(frame)] for frame in s.split()]
    score = 0
    for i, frame in enumerate(frames):
        if len(frame) == 1:
            if i < 9 and (frames[i+1][0] == 10 or sum(frames[i+1]) < 10):
                score += 20
            else:
                score += 10
        elif len(frame) == 2:
            if frame[0] + frame[1] == 10:
                score += 10
            else:
                score += frame[0] + frame[1]
        else:
            score += max(frame)
    return score