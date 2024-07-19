```Python
def bowling_score(frames):
    score = 0
    frame = 1
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            roll = int(frames[i])
            i += 1
            if i < len(frames) and frames[i] == '/':
                if roll + 10 > int(frames[i+2]):
                    score += 10 + 10
                    i += 3
                    while frame < 11:
                        if i >= len(frames):
                            break
                        score += int(frames[i])
                        i += 1
                        frame += 1
                else:
                    score += 10 + roll
                    i += 2
                    while frame < 11:
                        if i >= len(frames):
                            break
                        score += int(frames[i])
                        i += 1
                        frame += 1
            else:
                score += roll
                i += 1
                while frame < 11 and i < len(frames) and frames[i].isdigit():
                    score += int(frames[i])
                    i += 1
                    frame += 1
        elif frames[i] == '/':
            if i > 0 and frames[i-1].isdigit():
                roll = int(frames[i-1])
                score += 10 - roll
                i += 2
                while frame < 11:
                    if i >= len(frames):
                        break
                    score += int(frames[i])
                    i += 1
                    frame += 1
            else:
                return 0
    return score