def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            if frame < 10:
                score += 30
            else:
                score += 10
            frame += 1
        elif frames[i] == "/":
            score += int(frames[i + 1]) + 10
            frame += 1
        else:
            strike = False
            for j in range(2):
                if frames[i + j] == "X":
                    strike = True
                    break
            if strike:
                score += 30
                frame += 1
            else:
                score += int(frames[i]) + int(frames[i + 1])
                frame += 2
    return score