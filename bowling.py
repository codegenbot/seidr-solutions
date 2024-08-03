```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == 'X':
            score += 30
        elif frames[i].startswith('/'):
            strike = True
            for j in range(i+1, 11):
                if frames[j] != '/':
                    break
            if strike:
                score += 30 + int(frames[i][1:])
            else:
                score += 10 + int(frames[i][1:]) + int(frames[j])
        else:
            parts = frames[i].split('/')
            score += sum(int(part) for part in parts)
    return score