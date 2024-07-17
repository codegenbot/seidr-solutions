def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            parts = frames[i * 2 : i * 2 + 2].split("/")
            if len(parts) == 1:
                strike = True
            elif int(parts[0]) + int(parts[1]) == 10:
                spare = True
            score += 10

            while i < 9 and (strike or spare):
                if strike:
                    score += 10
                    i += 1
                elif spare:
                    score += int(frames[i * 2 + 1 : i * 2 + 3].split("/")[0])
                    i += 1
        else:
            parts = frames[i * 2 : i * 2 + 1].split("X")
            if len(parts) > 1:
                strike = True
            elif len(parts) == 1:
                score += int(parts[0])
            else:
                score += int(parts[0]) + 10

    return score