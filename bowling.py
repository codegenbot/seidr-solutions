def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 30
        elif frames[i] == "/":
            score += 10 + int(frames[i + 1])
        else:
            frame_score = 0
            for j in range(int(frames[i])):
                frame_score += 10 - int(frames[i])
            if i < 9 and frames[i + 2].isdigit():
                score += frame_score + int(frames[i + 1]) + int(frames[i + 2])
            else:
                score += frame_score + int(frames[i + 1])
    return score