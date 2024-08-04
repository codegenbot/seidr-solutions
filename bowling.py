```
def bowling_score(s):
    score = 0
    for i in range(10):
        if s[i] == 'X':
            if i < 9:
                score += 30
            else:
                score += 10 + max(int(s[10]) if len(s) > 10 else 0, int(s[11]) if len(s) > 11 else 0)
        elif s[i].isdigit():
            roll = [int(x) for x in str(s[i])]
            if len(roll) == 1:
                score += roll[0]
            elif len(roll) == 2:
                score += sum(roll)
            else:
                raise ValueError("Invalid input")
        elif s[i] == '/':
            first_roll = int(s[:i].split('/')[0])
            second_roll = 10 - first_roll
            if i < 9:
                score += first_roll + second_roll
            else:
                score += first_roll + second_roll
    return score