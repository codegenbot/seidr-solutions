def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == "X":
            score += 30
        elif frames[i][0] == "/":
            score += int(frames[i][1:]) + 10
        else:
            score += sum(map(int, frames[i]))
    return score