Here is the solution:

def bowling_score(s):
    score = 0
    roll = 0
    for i in range(10):
        if '/' in s[i*2:i*2+2]:
            first, second = map(int, re.split('/', s[i*2:i*2+2]))
            score += max(first, 10) + max(second, 10 - first)
            roll = 2
        else:
            score += int(s[i*2:i*2+2])
            roll = 1
    return score