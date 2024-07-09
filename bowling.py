def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 30
            i += 1
        elif frames[i] == "/":
            score += 10 + int(frames[i+1])
            i += 2
        else:
            frame_score = 0
            j = int(frames[i])
            while j > 0:
                if frames[i].isdigit() and int(frames[i]) < 10:
                    frame_score += 10 - int(frames[i])
                elif frames[i] == "X":
                    frame_score += 10
                    break
                else:
                    frame_score += int(frames[i])
                j -= 1
            while i < len(frames) and (frames[i] != "-" or not frames[i].isdigit()):
                if frames[i] != "-":
                    score += int(frames[i])
                i += 1
    return score