def bowling_score(frames):
    score = 0
    frame = 0
    for i in range(len(frames)):
        if frames[i].isdigit():
            if (
                len(frames[i:]) >= 2
                and frames[i : i + 2].isdigit()
                and int(frames[i]) + int(frames[i + 1]) <= 10
            ):
                score += 10 - int(frames[i])
                frame += 1
            elif int(frames[i]) > 0:
                score += int(frames[i])
                frame += 1
        else:
            if frames[i] == "X":
                score += 10
                frame += 1
            elif frames[i] == "/":
                continue
            else:
                score += int(frames[i - 1])
                frame += 1
    return score