def bowling_score(frames):
    score = 0
    frame_count = 0
    for i in range(len(frames)):
        if frames[i].isdigit():
            if frames[i] == "X":
                score += 10 + 10
            elif frames[i] == "/":
                score += 10
            else:
                score += int(frames[i])
        else:
            if frame_count < 9 and (frames[i - 1].isdigit() or frames[i - 1] == "X"):
                if frames[i - 1].isdigit():
                    score += int(frames[i - 1])
                else:
                    score += 10
            frame_count += 1
    return score