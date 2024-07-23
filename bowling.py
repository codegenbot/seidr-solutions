def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 1]:
            strike = False
            if frames[i * 2].isdigit():
                spare = int(frames[i * 2])
            else:
                strike = True
        elif (
            len(frames[i * 2 : i * 2 + 2]) == 3 and "X" not in frames[i * 2 : i * 2 + 2]
        ):
            spare = int(frames[i * 2 : i * 2 + 1])
        else:
            strike = True
        if strike:
            score += 10 + sum(
                int(x) for x in frames[20 - i * 2 : 22 - i * 2] if x.isdigit()
            )
        elif spare > 0:
            score += spare + sum(int(x) for x in frames[21 - i * 2 :] if x.isdigit())
    return score