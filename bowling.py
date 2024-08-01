def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            s1, s2 = map(int, re.findall("\d", frames[i * 2 : i * 2 + 2]))
            score += max(s1, 10 - s2) + max(s1, s2)
        else:
            score += int(frames[i * 2 : i * 2 + 2])
    return score