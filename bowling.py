def bowling_score(s):
    score = 0
    roll = 0
    for i in range(10):
        if "/" in s[i * 2 : i * 2 + 2]:
            first, second = map(int, re.findall(r"\d", s[i * 2 : i * 2 + 2]))
            score += min(first, 10) + min(second, 10)
        else:
            score += int(s[i * 2])
        if "X" in s[i * 2 : i * 2 + 2]:
            roll = 10
        elif "/" not in s[i * 2 : i * 2 + 2]:
            roll = int(s[i * 2])
        else:
            roll = min(first, 10) + min(second, 10)
    return score