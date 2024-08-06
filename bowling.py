def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == "X":
            score += 30
        elif frames[i].isdigit():
            if len(frames[i]) > 1:
                score += int(frames[i])
            else:
                score += int(frames[i])
        else:
            first, second = map(int, frames[i].split("/"))
            score += first + second
    return score