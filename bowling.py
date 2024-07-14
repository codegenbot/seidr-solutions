```
def bowling_score(score):
    score = score.replace('/', '')
    frames = [int(x) for x in score]
    total_score = 0
    roll = 0
    for i in range(len(frames)):
        if frames[i] == 10: # strike
            total_score += 10 + (frames[roll+1] + frames[roll+2]) if i < 7 else 10
            roll += 2
        elif frames[i] + frames[i+1] > 10: # spare
            total_score += 10 + frames[roll+1]
            roll += 2
        else:
            total_score += frames[i] + frames[i+1]
            roll += 2
    return total_score