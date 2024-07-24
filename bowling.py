```
def bowling_score(s):
    score = 0
    frames = [int(x) for x in s]
    for i in range(len(frames)):
        if frames[i] == 10:
            score += 10
        elif frames[i:i+2].count(10) > 0:
            score += sum(frames[i:i+2]) + (10 - max(frames[i:i+2]))
        else:
            score += min(frames[i:i+2]) * 2
    return score