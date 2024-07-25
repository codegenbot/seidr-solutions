```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit() and s[i+1].isdigit():
            num1 = int(s[i])
            num2 = int(s[i+1])
            if num1 + num2 == 10:
                score += 10
                frame -= 1
            else:
                score += num1 + num2
        elif s[i].isdigit():
            num = int(s[i])
            score += num
            frame -= 1
        else:
            score += 10
            frame -= 1
    return score