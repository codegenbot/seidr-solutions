def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            if frames[i * 2].isdigit():
                spare = True
                for j in range(i * 2, i * 2 + 3):
                    if frames[j].isdigit():
                        score += int(frames[j])
            else:
                strike = True
                score += 10
        elif frames[i * 2 : i * 2 + 1].isdigit() and len(frames) > i * 2 + 1:
            for j in range(i * 2, i * 2 + 3):
                if frames[j].isdigit():
                    score += int(frames[j])
    return score