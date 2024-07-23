def bowling_score(frames):
    score = 0
    frames = [int(x) if x.isdigit() else x for x in frames]
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10
            if i + 1 < len(frames) and frames[i + 1] == "/":
                score += 5
            elif i + 1 < len(frames) and frames[i + 1].isdigit():
                score += int(frames[i + 1]) * 2
            else:
                i += 1
        elif frames[i] == "/":
            if i + 1 < len(frames):
                score += 10 - int(frames[i + 1])
            else:
                score += 5
            i += 2
        else:
            frame_points = 0
            for j in range(1, 3):
                if i+j >= len(frames):
                    break
                if frames[i+j] == "X":
                    frame_points = 10 - frame_points
                    break
                elif frames[i+j] == "/":
                    frame_points = 10 - frame_points - int(frames[i+j-1])
                    break
                else:
                    frame_points += int(frames[i+j])
            score += frame_points
            i += 2
    return score