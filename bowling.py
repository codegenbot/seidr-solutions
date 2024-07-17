```
def bowling_score(s):
    score = 0
    frame = 0
    for i in range(0, len(s), 2):
        if s[i].isdigit() and s[i+1].isdigit():
            if int(s[i]) + int(s[i+1]) >= 10:
                if frame < 9:
                    score += min(int(s[i]), int(s[i+1])) * 2
                else:
                    score += min(int(s[i]), int(s[i+1]))
                frame += 1
            elif frame == 0 and s[i] != 'X' and s[i+1] != 'X':
                if sum(map(int, list(s[:i]))) < 10:
                    return "Invalid input"
            else:
                score += 10
                frame += 1
        elif s[i] == 'X':
            score += 10
            frame += 1
        elif s[i] == '/':
            if sum(map(int, list(s[:i-1]))) < 10:
                return "Invalid input"
            score += 10 - int(s[i+1])
            frame += 1
    if frame < 10:
        return "Invalid input"
    return score