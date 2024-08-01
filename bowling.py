def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 30
            frame -= 1
        elif frames[i] == "/":
            score += int(frames[i + 1])
        else:
            score += int(frames[i : i + 2].lstrip("0"))
    return score