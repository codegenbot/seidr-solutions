def bowling_score(frames):
    score = 0
    frame = 1
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10 + (frame != 10)
            frame += 1
            i += 1
        elif frames[i] in "/-":
            if frames[i] == "/":
                bonus = int(frames[i+1])
            else:
                bonus = 0
            score += 10 - int(frames[i-1]) + bonus
            frame += 1
            i += 2
        else:
            frame_score = 0
            for j in range(int(frames[i])):
                if frame == 10 and (frames[i+j] not in "-0" or j > 1):
                    return -1
                frame_score += 10 - int(frames[i])
            score += frame_score
            i += len(frames[i].strip("/"))
        if frame == 11:
            break
    return score