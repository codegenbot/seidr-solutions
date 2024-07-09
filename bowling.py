def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 30
        elif frames[i] == "/":
            score += int(frames[i + 1]) + 10
        else:
            frame_score = int(frames[i])
            if i < 8 and (frames[i + 1] == "X" or frames[i + 1] == "/"):
                score += frame_score + 10
            elif i < 9 and frames[i + 1].isdigit():
                score += frame_score + int(frames[i + 1])
            elif i < 10 and frames[i + 1] == "-":
                score += frame_score