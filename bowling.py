```
def bowling_score(s):
    score = 0
    for i in range(10):
        if s[i] == 'X':
            score += 30
        elif s[i].isdigit():
            if '/' in s[i:i+2]:
                strike, spare = map(int, s[i].split('/'))
                score += strike + spare + 10
            else:
                score += int(s[i]) * 10
    return score