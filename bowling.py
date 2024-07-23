def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] != "/":
            strike = False
            if i < len(frames) - 1 and frames[i + 1] == "X":
                strike = True
            elif frames[i + 1].isdigit():
                score += int(frames[i]) + int(frames[i + 1])
            else:
                score += int(frames[i]) + (10 - int(frames[i - 1]))
        else:
            score += 10
    return score