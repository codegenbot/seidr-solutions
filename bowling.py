def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            first, second = map(int, re.findall("\d", frames[i * 2 : i * 2 + 2]))
            if first == 10:
                score += 10 + sum(map(int, frames[i * 2 + 1 : i * 3]))
            else:
                score += first + second
        else:
            score += int(frames[i * 2])
    return score