def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i]:
            first, second = map(int, re.split("/", frames[i]))
            if first == 10:
                score += 10 + sum(map(int, frames[i + 1 : i + 3]))
            else:
                score += first + second
        else:
            score += int(frames[i])
    return score