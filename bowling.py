```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i] == 'X':
            score += 10 + (10 if frame < 9 and s[i+2].isdigit() else 0)
            frame += 1
        elif s[i:i+2] == 'XX':
            score += 20
            frame += 1
        elif s[i] != '/':
            score += int(s[i])
            if s[i+1] == 'X' or (s[i+1].isdigit() and frame < 9):
                score += 10
            frame += (s[i:i+2] == 'X' or i+1 >= len(s))
        else:
            first, second = map(int, s[i-1].split('/'))
            score += first
            if frame < 9:
                score += second
            frame += 1
    return score