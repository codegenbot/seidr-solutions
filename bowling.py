```
def bowling_score(s):
    score = 0
    for i in range(10):
        if s[i] == 'X':
            score += 30
        elif s[i].isdigit():
            score += int(s[i])
        else:
            first_roll, second_roll = map(int, s[i-1:i+2].lstrip('/'))
            if s[i] == '/':
                score += first_roll + 10
            else:
                score += first_roll + second_roll
    return score