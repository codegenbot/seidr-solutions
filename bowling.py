def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "/":
            score += 10
        else:
            score += int(frames[i])
    return score