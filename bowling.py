```
def bowling_game(s):
    s = s.replace('/', '')
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i] == 'X':
            score += 10 + (10 - int(s[i+1:])) * 2 if i < 18 and s[i+1].isdigit() else 10
            frame += 1
        elif s[i] == '-':
            score += 10 + int(s[i-1]) * 2 if i > 0 and s[i-1].isdigit() else 10
            frame += 1
        else:
            score += sum(int(i) for i in s[i:i+2])
            frame += 1
    return score