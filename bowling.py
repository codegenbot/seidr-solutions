def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 30
        elif frames[i] == "/":
            score += 10 + int(frames[i + 1])
        else:
            frame_points = 0
            for j in range(i, min(i + 2, len(frames))):
                if frames[j] == "X":
                    frame_points += 30
                    break
                elif frames[j] == "/":
                    frame_points += 10 + int(frames[j + 1])
                    break
                else:
                    frame_points += int(frames[j])
            score += frame_points
    return score