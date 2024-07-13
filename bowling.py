def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            if i < 9:
                if frames[i + 1].isdigit() and int(frames[i + 1]) != 10:
                    score += 30
                else:
                    score += 30 + (10 - int(frames[i + 1]))
            else:
                score += 30
        elif frames[i] == "/":
            score += 10 + int(frames[i + 1])
        else:
            if int(frames[i]) + int(frames[i + 1]) >= 10:
                score += 10 + (10 - int(frames[i]) - int(frames[i + 1]))
            else:
                score += int(frames[i]) + int(frames[i + 1])
    return score