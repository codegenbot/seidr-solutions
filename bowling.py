Here is the solution to the problem:

def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split('/')):
        if frame == 'X':
            score += 30
        elif frame == '':
            if frames[i-1] == 'X' or len(frames.split('/')[i-1]) > 1:
                score += 20 + int(frames.split('/')[i-1].split('X')[0])
            else:
                score += 20
        elif frame[0] == 'X':
            score += 10 + int(frame[1:])
        else:
            score += sum(int(part) for part in frame)
    return score