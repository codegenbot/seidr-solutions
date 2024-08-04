```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == 'X':
            score += 30
        elif frames[i] == '/':
            score += 10 + int(frames[:i].count('X')) * 10
        else:
            strikes = 0
            for j in range(i, -1, -1):
                if frames[j] == 'X':
                    strikes += 1
                elif frames[j] == '/':
                    score += 10 + (j - i) * 10
                    break
                else:
                    score += int(frames[j])
            score += 10 * strikes
    return score