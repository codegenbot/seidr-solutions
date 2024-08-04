def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            a = int(s[i])
            b = int(s[i + 1]) if s[i + 1].isdigit() else 10 - a
            score += a + b
            if a + b == 10:
                frame += 1
    return score