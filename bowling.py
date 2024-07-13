```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i*2:i*2+2]:
            strike = int(frames[i*2])
            if i < 9:
                next_strike = int(frames[(i+1)*2])
                score += strike * 10 + strike + next_strike
            else:
                score += strike * 10 + strike
        elif '-' in frames[i*2:i*2+3]:
            spare = int(frames[i*2+i])
            if i < 9:
                next_ball = int(frames[(i+1)*2])
                score += 10 + spare + next_ball
            else:
                score += 10 + spare
        else:
            for j in range(2):
                score += int(frames[i*2+j])
    return score