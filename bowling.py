def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == "X":
            score += 30
        elif "/" in frames[i]:
            first, second = map(int, frames[i].split("/"))
            score += first + second
        else:
            score += int(frames[i])
    return score