def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            a, b = map(int, re.findall("\d", frames[i * 2 : i * 2 + 3]))
            score += max(a, b) + (10 - i) * min(a, b)
        else:
            score += int(frames[i * 2 : i * 2 + 2])
    return score