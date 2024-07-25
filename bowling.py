def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            if frames[i * 2 : i * 2 + 1] == "X":
                strike = True
            elif frames[i * 2 : i * 2 + 2].count("/"):
                spare = True
            else:
                score += int(frames[i * 2 : i * 2 + 1])
        else:
            if frames[i * 2 : i * 2 + 2].count("/"):
                score += 10 - int(frames[i * 2 : i * 2 + 1])
            elif frames[i * 2 : i * 2 + 2] == "X":
                score += 10
                strike = True
            else:
                score += int(frames[i * 2 : i * 2 + 1]) + int(
                    frames[i * 2 + 1 : i * 2 + 2]
                )
        if i < 9 and (strike or spare):
            for j in range(i + 1, 10):
                if "/" in frames[j * 2 : j * 2 + 2]:
                    break
                score += int(frames[j * 2 : j * 2 + 1])
    return score