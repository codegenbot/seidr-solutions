def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            if i < 8:
                score += 30
            else:
                score += 10 + (int(frames[i + 1]) + int(frames[i + 3])) * 10
        elif frames[i] == "/":
            score += 10 + (10 - int(frames[i - 1]))
        else:
            score += int(frames[i]) * 10 + int(frames[i + 1])
    return score