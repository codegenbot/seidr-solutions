def bowling_score(frames):
    score = 0
    for frame in frames.split(', '):
        if '/' in frame:
            first_roll = int(frame.split('/')[0])
            second_roll = int(frame.split('/')[1])
            score += first_roll + second_roll
        elif frame == 'X':
            score += 10 + int(frames.split(',')[frames.index(frame)+2].split('/')[0]) if len(frames) > frames.index(frame) + 2 else 10
        else:
            score += int(frame)
    return score

frames = "7/5, 3/10, X,X,X, 8/3, X,X, X,X, 4/6, 2/X"
print(bowling_score(frames))