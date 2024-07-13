def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            if i + 2 < len(frames):
                score += 10 + int(frames[i+1]) + int(frames[i+2])
            else:
                score += 10 + 10 + int(frames[i+1])
            i += 3
        elif frames[i] == "/":
            score += 10
            if frames[i+1].isdigit():
                score += int(frames[i+1])
            i += 2
        else:
            frame_score = 0
            for j in range(int(frames[i])):
                frame_score += 10 - int(frames[i])
            score += frame_score
            if i < 9 and frames[i + 2].isdigit():
                score += int(frames[i + 1]) + int(frames[i + 2])
            else:
                score += int(frames[i + 1])
            i += 2
    return score