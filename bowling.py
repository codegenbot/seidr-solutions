```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i*2:i*2+2]:
            parts = frames[i*2:i*2+2].split('/')
            if len(parts) > 1:
                score += min(int(parts[0]), 10)
                if int(parts[0]) < 10 and int(parts[1]) != 'X':
                    score += int(parts[1])
            else:
                score += 10
        else:
            score += int(frames[i*2:i*2+2])
    return score