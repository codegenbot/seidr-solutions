```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit() and s[i+1].isdigit():
            strikes = int(s[i])
            score += strikes * 10 + 10
            frame += 1
        elif s[i] == 'X':
            score += 10
            frame += 1
        else:
            first, second = map(int, s[i:i+2])
            if first == 10: 
                score += first + second
                frame += 1
            else:
                score += first
                if second == '/':
                    score += 10 - first
                elif second == 'X':
                    score += 10 - first
                else:
                    score += second
                frame += 1
    return score