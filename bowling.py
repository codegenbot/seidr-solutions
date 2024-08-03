def bowling_score(frames):
    score = 0
    frame_count = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit() and frames[i + 1].isdigit():
            score += int(frames[i]) * 10 + int(frames[i + 1])
            frame_count += 1
        elif frames[i] == "/":
            if frames[i - 1].isdigit():
                score += 10 - int(frames[i - 1])
            else:
                score += 10
            frame_count += 1
        elif frames[i] == "X":
            score += 30
            frame_count += 1
        elif frames[i] == "-":
            continue
    return score