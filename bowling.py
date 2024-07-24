def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            if frames[i * 2].isdigit() and frames[i * 2 + 1].isdigit():
                score += int(frames[i * 2]) + int(frames[i * 2 + 1])
            elif frames[i * 2].isdigit():
                score += 10
                strike = True
            else:
                spare = True
        else:
            if frames[i * 2].isdigit() and frames[i * 2 + 1].isdigit():
                score += int(frames[i * 2]) + int(frames[i * 2 + 1])
    return score