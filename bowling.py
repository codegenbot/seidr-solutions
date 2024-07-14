def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            if frames[i * 2] == "X":
                strike = True
            elif frames[i * 2].isdigit():
                if int(frames[i * 2]) + int(frames[i * 2 + 1]) == 10:
                    spare = True
            score += 10
        else:
            score += int(frames[i * 2 : i * 2 + 2])
        if not strike and not spare:
            if frames[i * 2].isdigit():
                score += int(frames[i * 2])
            if frames[i * 2 + 1].isdigit():
                score += int(frames[i * 2 + 1])
    return score