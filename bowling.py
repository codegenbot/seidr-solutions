def bowling_score(bowling_string):
    score = 0
    frames = [
        int(x) if x.isdigit() else 10
        for x in re.sub("[^X0123456789/]", "", bowling_string)
    ]
    for i in range(len(frames)):
        if frames[i] == 10:
            score += frames[i]
            if i < len(frames) - 1 and frames[i + 1] == "X":
                score += frames[i + 2]
            elif i < len(frames) - 1 and frames[i + 1].isdigit():
                score += frames[i + 1]
        else:
            score += frames[i]
            if i < len(frames) - 1:
                if frames[i] + int(frames[i + 1]) == 10:
                    score += frames[i + 1]
                elif frames[i] + int(frames[i + 1].split("/")[0]) <= 10:
                    score += int(frames[i + 1].split("/")[0])
    return score