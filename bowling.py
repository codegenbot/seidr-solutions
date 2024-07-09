def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 30
            i += 2
        elif frames[i] == "/":
            score += 10 + int(frames[i+1])
            i += 2
        else:
            frame_score = 0
            j = int(frames[i])
            k = 1
            while j > 0 and k <= 2:
                if k == 1 and frames[i].isdigit() and int(frames[i]) < 10:
                    frame_score += 10 - int(frames[i])
                elif k == 1 and frames[i] == "X":
                    frame_score += 10
                    i += 1
                    break
                else:
                    if k > 1:
                        i += 1
                    frame_score += int(frames[i])
                j -= 1
                k += 1
            score += frame_score
        i += 1
    return score