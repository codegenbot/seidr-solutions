def bowling_score(frames):
    score = 0
    frame = 1
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            rolls = int(frames[i])
            i += 1
            if i < len(frames) and frames[i] == '/':
                i += 1
                if frame < 10:
                    if rolls + 1 != 10:
                        score += 10 - rolls
                    else:
                        score += 10
                    frame += 1
                else:
                    score += 10
            else:
                while rolls > 0:
                    if i >= len(frames):
                        break
                    if frames[i].isdigit():
                        rolls -= int(frames[i])
                        i += 1
                    elif frames[i] == '/':
                        if rolls > 0:
                            score += 10 - rolls
                        break
        frame += 1
    return score