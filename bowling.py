```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            num1 = int(s[i])
            if i + 1 < len(s) and s[i+1].isdigit():
                num2 = int(s[i+1])
                score += (num1 + num2) * 10
                frame -= 1
                if frame == 0:
                    break
            elif s[i+1] == '/':
                score += -10
                frame -= 1
                if frame == 0:
                    break
        else:
            score += 10
            frame -= 1
            if frame == 0:
                break
    return score