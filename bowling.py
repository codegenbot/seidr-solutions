def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 30
        elif frames[i] == "/":
            score += int(frames[i + 1]) + 10
        else:
            frame_score = 0
            for j in range(i, i + 2):
                if frames[j] == "X":
                    frame_score += 10
                    break
                elif frames[j] == "/":
                    frame_score += int(frames[j + 1])
                    break
                else:
                    frame_score += int(frames[j])
            score += frame_score
    return score