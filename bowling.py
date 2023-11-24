def bowling_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    for i in range(len(bowls)):
        if frame > 10:
            break
        if bowls[i] == 'X':
            score += 10
            if frame < 10:
                if i + 2 < len(bowls) and bowls[i+2] == '/':
                    score += 10
                else:
                    score += int(bowls[i+1])
                    score += int(bowls[i+2])
            frame += 1
            frame_score = 0
        elif bowls[i] == '/':
            score += 10 - frame_score
            if frame < 10:
                if i + 1 < len(bowls):
                    score += int(bowls[i+1])
            frame += 1
            frame_score = 0
        elif bowls[i] == '-':
            frame_score += 0
        else:
            score += int(bowls[i])
            frame_score += int(bowls[i])
            if frame_score == 10:
                frame_score = 0
            if frame_score == 0:
                frame += 1
    return score