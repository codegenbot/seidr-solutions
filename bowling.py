def bowling_score(frames):
    frames = frames.replace('/-/', '/').replace('X-', 'XX')
    frames = [list(map(int, frame.replace('/', '-0/').split('+'))) for frame in frames.split('-')]
    score = 0
    i = 0
    while i < len(frames):
        if sum(frames[i]) == 10:
            if i < len(frames) - 1 and sum(frames[i+1]) > 10:
                score += 15
            else:
                score += 10
        elif frames[i][0] == 10:
            score += 10 + sum(frames[i][1:])
        elif frames[i][0] >= 5 and sum(frames[i]) < 10:
            score += sum(frames[i])
        i += 1

    return score