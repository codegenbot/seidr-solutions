def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit() and frames[i + 1] == "/":
            score += int(frames[i]) * 10 + 10 - int(frames[i])
        elif frames[i].isdigit():
            score += sum(int(x) for x in frames[i])
    return score