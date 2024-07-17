def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            if frames[i + 1] == "/":
                score += int(frames[i]) * 10 + 10 - int(frames[i])
            else:
                score += int(frames[i]) * 10 + int(frames[i + 1])
        elif frames[i] == "X":
            score += 30
        elif frames[i] == "-":
            continue
        elif frames[i].isdigit():
            if frames[i + 1] == "X":
                score += 30 - int(frames[i])
            elif frames[i + 1] == "/":
                score += 10 + 10 - int(frames[i])
            else:
                score += 10 + int(frames[i + 1]) - int(frames[i])
    return score