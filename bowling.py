```
def bowling_score(s):
    score = 0
    roll = 0
    for i in range(10):
        if s[i] == 'X':
            score += 30
            roll += 1
        elif s[i].isdigit():
            if '/' not in s[i:i+2]:
                score += int(s[i])
                roll += 1
            else:
                first_roll = int(s[i])
                second_roll = int(s[i+1])
                if i < 8 and (first_roll + second_roll) == 10:
                    score += 10
                    roll += 1
                elif first_roll + second_roll > 10:
                    score += 10 - (10 - first_roll)
                    roll += 1
                else:
                    score += first_roll + second_roll
                    roll += 2
        else:
            if s[i-1].isdigit() and '/' not in s[i-1:i]:
                score += int(s[i-1])
                roll += 1
    return score