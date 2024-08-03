def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            a = int(s[i])
            if i < len(s) - 1 and s[i + 1].isdigit():
                b = int(s[i + 1])
                score += a + b
                if a + b == 10:
                    frame -= 0.5
                else:
                    frame -= 1
            elif a != 0 or s[i - 1] == "/":
                score += a
                frame -= 1
        elif s[i] == "/":
            continue
    return int(score)