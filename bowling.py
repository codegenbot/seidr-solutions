```
def bowling_score(s):
    score = 0
    i = 0
    while i < len(s):
        if s[i] == 'X':
            if i + 3 > len(s):
                score += 10
            elif s[i+1] == 'X':
                score += 20
            else:
                score += 10
            i += 2
        elif s[i] == '/':
            first_roll = int(s[i-1])
            second_roll = 10 - first_roll
            if i + 3 > len(s):
                score += first_roll + second_roll
            else:
                if s[i+1] == 'X':
                    score += first_roll + 9
                else:
                    score += first_roll + int(s[i+2])
            i += 3
        else:
            first_roll = int(s[i])
            if s[i+1] == 'X':
                score += 10 + first_roll
                i += 2
            elif s[i+1] == '/':
                score += first_roll + second_roll
                i += 3
            else:
                score += first_roll + int(s[i+1])
                i += 2
    return score