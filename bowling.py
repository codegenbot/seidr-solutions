def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            if frames[i * 2 + i] == "X":
                strike = True
            elif frames[i * 2 + i] == "/":
                spare = True
            score += (
                10 + int(frames[i * 2 + 1].strip("/"))
                if strike
                else (
                    (10 - int(frames[i * 2 + 1].strip("/")))
                    if spare
                    else int(frames[i * 2 : i * 2 + 2])
                )
            )
        else:
            score += int(frames[i * 2 : i * 2 + 2])
    return score