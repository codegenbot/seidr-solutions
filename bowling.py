def bowling_score(frames):
    score = 0
    frame_count = 1
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 10 + (10 if i < 18 and frames[i + 2] == "X" else 0)
        elif frames[i] == "/":
            score += 10 - int(frames[i + 1])
        else:
            score += int(frames[i : i + 2])
        frame_count = min(frame_count + 1, 11)
    return score