def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            if frames[i * 2 : i * 2 + 1] == "X":
                strike = True
            elif frames[i * 2 : i * 2 + 2].count("X") > 0:
                spare = True
            else:
                score += min(int(frames[i * 2]), int(frames[i * 2 + 1])) * 10 + max(
                    int(frames[i * 2]), int(frames[i * 2 + 1])
                )
        elif frames[i * 2 : i * 2 + 2].count("X") > 0:
            if frames[i * 2 : i * 2 + 1] == "X":
                score += 10 + min(int(frames[i * 2 + 2]), int(frames[i * 2 + 3])) * 10
            else:
                score += 10 + max(int(frames[i * 2]), int(frames[i * 2 + 1]))
        elif frames[i * 2 : i * 2 + 1] == "X":
            score += 10
        elif frames[i * 2 : i * 2 + 2].count("X") > 0:
            score += min(int(frames[i * 2]), int(frames[i * 2 + 1])) * 10 + max(
                int(frames[i * 2 + 2]), int(frames[i * 2 + 3])
            )
        else:
            score += int(frames[i * 2]) + int(frames[i * 2 + 1])
    return score