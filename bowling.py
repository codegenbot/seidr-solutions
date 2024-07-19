def bowling_score(s):
    score = 0
    frame = 0
    for i in range(len(s)):
        if s[i].isdigit():
            num = int(s[i])
            if s[i + 1].isdigit():
                num += int(s[i + 1])
            if s[i + 2].isdigit():
                num += int(s[i + 2])
            if frame < 9 and s[i + 3].isdigit() or s[i + 3] == "/":
                score += min(num, 10)
            else:
                score += num
            if s[i + 1].isdigit() or s[i + 1] == "/":
                frame += 1
    return score