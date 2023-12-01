def get_bowling_score(bowls):
    score = 0
    frames = bowls.split('/')
    for frame in frames:
        if frame == 'X':
            score += 10
        else:
            score += int(frame[0]) + int(frame[1])
    return score