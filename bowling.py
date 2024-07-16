def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            if i + 2 < len(frames) and frames[i+1] == "/":
                score += 30
            elif i + 1 < len(frames):
                score += 10 + int(frames[i+1]) + 10
            else:
                score += 25
        elif frames[i] == "/":
            if i + 2 < len(frames) and frames[i+1].isdigit() and frames[i+2].isdigit():
                score += 10 + int(frames[i+1]) + int(frames[i+2])
            elif i + 1 < len(frames):
                score += 10 + int(frames[i+1])
        else:
            frame_score = 0
            for j in range(int(frames[i])):
                frame_score += 10 - int(frames[i])
            if i < 9 and frames[i + 2].isdigit():
                score += frame_score + int(frames[i + 1]) + int(frames[i + 2])
            else:
                score += frame_score + int(frames[i + 1])
        i += 2
    return score