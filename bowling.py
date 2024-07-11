def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = True
            if len(frames[i * 2 : i * 2 + 2]) > 1:
                spare = True
                for j in range(len(frames[i * 2 : i * 2 + 2])):
                    if frames[i * 2 + i] != "/":
                        score += int(frames[i * 2 + i])
        else:
            strike = False
            parts = frames[i * 2 : i * 2 + 2].split("/")
            for part in parts:
                score += int(part)
    return score