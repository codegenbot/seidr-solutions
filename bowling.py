def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            a = int(s[i])
            b = (
                10 - a
                if i < len(s) - 1 and s[i + 1].isdigit()
                else (
                    10 - a + int(s[i + 1])
                    if i < len(s) - 2 and s[i + 1].isdigit() and s[i + 2].isdigit()
                    else 0
                )
            )
            score += a + b
            frame -= a > 0
        elif s[i] == "X":
            score += 10
            frame -= 1
        elif s[i] == "/":
            continue
    return score