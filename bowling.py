```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            num1 = int(s[i])
            if i + 1 < len(s) and s[i+1].isdigit():
                num2 = int(s[i+1])
            else:
                num2 = 10 - num1
            score += num1 + num2
            frame = min(frame, 2)
        elif s[i] == 'X':
            score += 10
            frame -= 1
        else:
            if s[i] == '/':
                first, second = map(int, s[i-1:i+1])
                score += first + (10 - first) if frame == 1 else max(first, 10-first)
            elif s[i] == '-':
                pass
    return score