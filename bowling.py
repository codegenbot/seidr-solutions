```
def bowling_score(frames):
    score = 0
    roll = 1
    for i in range(len(frames)):
        if frames[i] == 'X':
            score += 10
            if i < len(frames) - 1:
                if frames[i+1] == 'X':
                    score += 30
                elif frames[i+1] == '/':
                    score += 10 + int(frames[i+2])
                else:
                    score += 10 + int(frames[i+1]) * 2
            roll = 0
        elif frames[i] == '/':
            score += 10
            if i < len(frames) - 1:
                score += int(frames[i+1])
            roll = 0
        else:
            if roll == 1:
                first_roll = int(frames[i])
                roll = 2
            elif roll == 2:
                score += first_roll + int(frames[i])
    return score