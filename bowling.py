def bowling_score(frames):
    score = 0
    frames = frames.split("/")
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 30
        elif frames[i] != " ":
            if i < 9 and frames[i + 1].isdigit():
                score += int(frames[i]) + int(frames[i + 1])
            else:
                score += 10 + int(frames[i])
        else:
            score += int(frames[i])
    return score