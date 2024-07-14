def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i]:
            a, b = map(int, re.split("/", frames[i]))
            if a == 10:
                score += 10 + sum(map(int, frames[i + 1 : i + 3]))
            else:
                score += a + max(a, b)
        else:
            score += int(frames[i])
    return score