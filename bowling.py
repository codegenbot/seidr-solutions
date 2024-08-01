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
        elif frames[i] == "X":
            score += 10
            frame += 1
            if i < len(frames) - 1 and frames[i + 1].isdigit():
                score += int(frames[i + 1])
                frame += 1
        else:
            if spare:
                score += 10 + int(frames[i]) + int(frames[i + 1])
                frame += 2
            elif strike:
                score += 10 + int(frames[i]) + int(frames[i + 1])
                frame += 3
    return score