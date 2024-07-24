def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            first, second = map(int, re.sub("[^0-9]", "", frames[i * 2 : i * 2 + 2]))
            score += max(first, 10) + max(second, 10)
        else:
            score += int(frames[i * 2 : i * 2 + 2])
    return score