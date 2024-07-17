```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(len(s)):
        if s[i] == 'X':
            score += 30
            frame += 1
        elif s[i] == '/':
            first_roll = int(s[:i].count('X')) * 10 + int(s[:i].replace('X', '').replace('/', '')) * 10 // 2
            if i < len(s) - 1 and s[i+1] == 'X':
                score += 30
            else:
                score += first_roll
            frame += 1
        elif s[i].isdigit():
            if i < len(s) - 1 and s[i+1] == 'X':
                score += int(s[i]) * 10 + 30
            else:
                score += int(s[i])
            frame += (int(s[i]) > 1)
    return score