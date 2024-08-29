def bowling_score(frames):
    score = 0
    frame_scores = []
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            if i < 9:
                if frames[i + 1] == "/":
                    score += 30
                    frame_scores.append(30)
                else:
                    score += 10 + int(frames[i + 1])
                    frame_scores.append(10 + int(frames[i + 1]))
        elif frames[i] == "/":
            score += 10 + int(frames[i + 1])
            frame_scores.append(10 + int(frames[i + 1]))
        else:
            if i < 9 and frames[i + 1] != "X" and frames[i + 1] != "/":
                score += 10 + int(frames[i]) + int(frames[i + 1])
                frame_scores.append(10 + int(frames[i]) + int(frames[i + 1]))
            elif i < 9:
                score += 10 + int(frames[i])
                frame_scores.append(10 + int(frames[i]))
    if len(frame_scores) == 10 and sum(frame_scores) == 300:
        return 300
    else:
        return score