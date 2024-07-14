```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30
        elif frames[i] == '/':
            score += 10 + int(frames[i+1])
        else:
            score += sum(int(x) for x in frames[i:i+2]) + (10 - sum(int(x) for x in frames[i:i+2])) if i < len(frames)-1 and frames[i+1] == '-' else 0
    return score