```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i] == 'X':
            score += 10 + (10 - int(s[i+1])) if frame < 9 else 10
        elif s[i].isdigit():
            if s[i+1] == '/':
                first_roll = int(s[i])
                second_roll = 10 - first_roll
                score += first_roll + second_roll
            else:
                first_roll = int(s[i:i+2])
                score += first_roll
        frame += (s[i] == 'X') or (s[i].isdigit() and s[i+1] != '/')
    return score