```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i]:
            first, second = map(int, re.split('/', frames[i]))
            if i < 9 and frames[i+1].startswith('X'):
                score += max(first, 10) + second
            else:
                score += max(first, 10)
        elif 'X' == frames[i]:
            score += 10
        else:
            score += int(frames[i])
    return score