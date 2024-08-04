```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            strike = False
            if s[i+1] == 'X':
                strike = True
            elif s[i+1].isdigit():
                first_roll = int(s[i])
                second_roll = int(s[i+1])
                if first_roll + second_roll >= 10:
                    score += 10
                else:
                    score += first_roll + second_roll
            if strike:
                score += 10
                frame -= 1
        else:
            first_roll = int(s[i])
            second_roll = int(s[i+1].lstrip('/'))
            score += first_roll + second_roll
    return score