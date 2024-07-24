def bowling_score(frames):
    score = 0
    frame = 0
    for i in range(len(frames)):
        if frames[i].isdigit():
            if int(frames[i]) == 10:
                score += 10 + (
                    10 if i + 1 < len(frames) and frames[i + 1].isdigit() else 0
                )
                frame += 1
            elif int(frames[i]) < 10:
                score += int(frames[i])
                frame += 1
        else:
            if int(frames[i - 1]) == 10:
                score += 10 + (
                    int(frames[i].replace("/", ""))
                    if i + 1 < len(frames) and frames[i + 1].isdigit()
                    else 0
                )
                frame += 1
            elif int(frames[i - 1]) < 10:
                score += int(frames[i - 1])
                frame += 1
    return score