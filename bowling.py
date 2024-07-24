def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 30
        elif frames[i] == "/":
            score += 10 + int(frames[i + 1])
        else:
            frame_points = sum(int(x) for x in frames[i : i + 2])
            if frame_points < 10:
                score += frame_points
            else:
                score += 10 + (10 - int(frames[i]))
    return score