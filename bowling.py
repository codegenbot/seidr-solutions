def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i].isdigit() and frames[i + 1].isdigit():
            strike = False
            spare = False
            if int(frames[i]) + int(frames[i + 1]) == 10:
                spare = True
            elif int(frames[i]) == 10:
                strike = True
            else:
                score += int(frames[i]) + int(frames[i + 1])
                frame += 1
        elif frames[i].isdigit():
            if strike:
                score += 10 + 10 + int(frames[i])
                strike = False
            elif spare:
                score += 10 + int(frames[i])
                spare = False
            else:
                score += int(frames[i])
                frame += 1
        elif frames[i] == "X":
            if strike:
                score += 10 + 10 + 10
                strike = False
            elif spare:
                score += 10 + 10
                spare = False
            else:
                score += 10
                frame += 1
    return score