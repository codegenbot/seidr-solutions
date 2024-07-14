def bowling_score(frames):
    score = 0
    frame_count = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            if int(frames[i]) == 10:
                score += (
                    10 + 10 if i + 1 < len(frames) and frames[i + 1].isdigit() else 10
                )
                frame_count += 1
            elif int(frames[i : i + 2]) < 11:
                score += int(frames[i : i + 2])
                frame_count += 1
        elif frames[i] == "X":
            score += 10 + 10 if i + 1 < len(frames) and frames[i + 1].isdigit() else 10
            frame_count += 1
    return score