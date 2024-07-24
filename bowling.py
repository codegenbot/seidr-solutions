def bowling_score(frames):
    score = 0
    frame_count = 0
    for i in range(len(frames)):
        if frames[i].isdigit():
            if len(frames[i]) == 1:
                score += int(frames[i])
            else:
                if len(frames[i]) == 2 and frames[i][0] == "X":
                    score += 30
                elif len(frames[i]) >= 3 and frames[i][:2] == "XX":
                    score += 20
                else:
                    score += int(frames[i])
        else:
            if frame_count < 9:
                if frames[i] == "/":
                    score += 10
                elif frames[i] == "-":
                    continue
                else:
                    score += 10
            frame_count += 1
    return score