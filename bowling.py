def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 30
        elif frames[i] == "/":
            score += int(frames[i + 1]) + 10
        else:
            frame_score = int(frames[i])
            if i < 8 and frames[i + 1] == "X":
                score += 30 - frame_score
            elif i < 9 and frames[i + 2].isdigit():
                score += int(frames[i + 1]) + frame_score
            else:
                score += frame_score
    return score