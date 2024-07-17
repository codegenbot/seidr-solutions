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
            score += 10 + (10 - int(parts[0])) * (strike or spare)
        else:
            parts = frames[i * 2 : i * 2 + 1].split("X")
            if len(parts) > 1:
                strike = True
            elif len(parts) == 1:
                score += int(parts[0])
            else:
                score += int(parts[0]) + 10
    return score