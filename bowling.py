def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            for j in range(i * 2 + 1, (i + 1) * 2):
                if frames[j] == "X":
                    strike = True
                elif frames[j] != "-":
                    spare = True
        else:
            strike = False
            spare = False
        if strike:
            score += 10 + sum(
                int(frame)
                for frame in frames[(i + 1) * 2 : (i + 2) * 2].replace("-", "0")
            )
        elif spare:
            score += (
                10
                + int(frames[i * 2 : i * 2 + 2].replace("/", ""))
                + sum(int(frame) for frame in frames[(i + 1) * 2 :].replace("-", "0"))
            )
        else:
            score += sum(int(frame) for frame in frames[i * 2 : (i + 1) * 2])
    return score