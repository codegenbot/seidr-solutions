def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 30
            frame += 1
        elif frames[i] == "/":
            score += 10 + int(frames[i + 1])
            frame += 1
        else:
            strike = False
            for j in range(2):
                if frames[i + j] == "X":
                    score += 10 + 10
                    strike = True
                    break
                elif frames[i + j] == "/":
                    score += 10 + int(frames[i + 1 + j])
                    frame += 1
                    break
            if not strike:
                score += int(frames[i]) + int(frames[i + 1])
                frame += 1
    return score