def bowling_score(frames):
    score = 0
    frame = 1
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            if frames[i] == '10':
                score += 10
                frame += 1
                i += 1
            elif frames[i+1].isdigit():
                score += int(frames[i:i+2])
                i += 2
                frame += 1
            else:
                score += int(frames[i])
                i += 1
        elif frames[i] == '/':
            if i < len(frames) - 1 and frames[i+1].isdigit():
                score += 10
                i += 2
            else:
                return 0
        i += 1
    return score