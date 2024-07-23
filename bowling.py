def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            if frames[i * 2] == "X":
                strike = True
            elif frames[i * 2] + frames[i * 2 + 1] == "10":
                spare = True
            else:
                score += 10
        else:
            if frames[i * 2] == "X":
                strike = True
            elif frames[i * 2] + frames[i * 2 + 1] == "10":
                spare = True
            else:
                score += int(frames[i * 2]) + int(frames[i * 2 + 1])
        if not strike and not spare:
            if i < 8:
                if frames[(i + 1) * 2 : i * 2 + 3].startswith("X"):
                    score += 10
                elif int(frames[(i + 1) * 2]) + int(frames[(i + 1) * 2 + 1]) == 10:
                    score += 10
    return score