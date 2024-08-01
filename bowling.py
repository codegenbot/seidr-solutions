def bowling_score(frames):
    score = 0
    frame = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 30
            frame += 1
        elif frames[i] == "/":
            if frames[i + 1] == "X":
                score += 20 + 10
                frame += 1
            else:
                strike = int(frames[i + 1])
                score += 20 + strike
                frame += 1
        else:
            strike = int(frames[i])
            spare = int(frames[i + 1])
            if strike == 10 and spare != "/":
                score += 10 + spare
                frame += 1
            elif strike == 5 or (strike < 9 and spare == "X"):
                score += 10 + strike + 10
                frame += 2
            else:
                score += 10 + strike + int(spare)
                frame += 2
    if len(frames) % 2 != 0 and frames[-1] == "X":
        score += 10
        frame += 1
    return score