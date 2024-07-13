```
def bowling_score(s):
    score = 0
    for i in range(10):
        if s[i] == 'X':
            score += 30
        elif s[i].isdigit():
            score += int(s[i])
        else:
            first, second = map(int, s[i-1:i+1])
            if first + second == 10:
                score += first + 10
            else:
                score += first + second
    return score