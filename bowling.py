def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            s1, s2 = map(int, re.split("/", frames[i * 2 : i * 2 + 2]))
            score += max(s1, 10) + max(s2, 10)
        else:
            score += sum(map(int, frames[i * 2 : i * 2 + 2]))
    return score