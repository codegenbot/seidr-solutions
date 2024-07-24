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
                score += 10 - int(frames[i * 2])
        else:
            if frames[i * 2] == "X":
                strike = True
            elif (
                frames[i * 2 : i * 2 + 2].isdigit()
                and int(frames[i * 2 : i * 2 + 2]) < 10
            ):
                spare = True
            score += int(frames[i * 2 : i * 2 + 2])
        if i < 9:
            if strike:
                score += 10 + sum(
                    int(x) for x in frames[(i + 1) * 2 : (i + 2) * 2] if x.isdigit()
                )
            elif spare:
                score += 10 + int(frames[(i + 1) * 2 : (i + 2) * 2].strip("/"))
    return score