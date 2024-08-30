def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            if i < 9:
                if frames[i + 1].isdigit():
                    score += 30
                else:
                    score += 20 + int(frames[i + 1][0])
            elif i == 9:
                score += 10
        elif frames[i : i + 2] == "XX":
            score += 30
        elif frames[i].isdigit() and frames[i + 1].isdigit():
            if int(frames[i]) + int(frames[i + 1]) < 10:
                score += int(frames[i]) * 2
            else:
                score += 10 + int(frames[i + 1])
    return score