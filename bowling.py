def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i]:
            first, second = map(int, re.split("/", frames[i]))
            if second == 0:
                score += first + 10
            else:
                score += first + second
        elif frames[i] == "X":
            score += 30
        else:
            score += sum(map(int, frames[i]))
    return score