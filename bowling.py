def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "/":
            score += 10
        elif frames[i : i + 2].isdigit():
            score += int(frames[i : i + 2])
        else:
            score += 1 * (int(frames[i]) + int(frames[i + 1]))
    return score