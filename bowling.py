def bowling_score(frames):
    score = 0
    frame = 0
    for i in range(len(frames)):
        if frames[i].isdigit():
            if len(frames[i]) == 1:
                strike = True
                while i < len(frames) - 1 and frames[i + 1] != "/":
                    i += 1
                score += 10 + int(frames[:i])
            elif len(frames[i]) == 2:
                spare = True
                while i < len(frames) - 1 and frames[i + 1].isdigit():
                    i += 1
                score += 10 + int(frames[i - 1 : i + 1])
        else:
            if strike:
                score += 10
                strike = False
            elif spare:
                score += 10
                spare = False
    return score