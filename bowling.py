def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i].isdigit():
            strike = False
            if len(frames) > i + 1 and frames[i + 1] == "X":
                strike = True
            elif len(frames) > i + 2 and frames[i + 1 : i + 3] == "XX":
                strike = True
            if not strike:
                score += int(frames[i])
                if len(frames) > i + 1 and frames[i + 1].isdigit():
                    score += int(frames[i + 1])
    return score