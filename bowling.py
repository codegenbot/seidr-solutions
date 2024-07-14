```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i] == 'X':
            score += 10 + (10 - int(s[i+1]) if frame < 9 else 0)
            frame += 1
        elif s[i].isdigit():
            first = int(s[i])
            second = int(s[i+1]) if i+1 < len(s) else 0
            score += first + second
            frame += (first + second > 10)
    return score