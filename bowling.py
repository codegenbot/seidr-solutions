```
def bowling_score(frames):
    score = 0
    frame_scores = []
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10
            if i + 1 < len(frames) and frames[i+1].isdigit():
                score += int(frames[i+1])
            elif i + 2 < len(frames) and frames[i+1] == "/" and frames[i+2].isdigit():
                score += 10 + int(frames[i+2])
            frame_scores.append(10)
        elif frames[i] == "/":
            score += 10
            if i + 1 < len(frames) and frames[i+1].isdigit():
                score += int(frames[i+1])
            frame_scores.append(10)
        else:
            current_frame_score = int(frames[i]) + (0 if i+1 >= len(frames) or frames[i+1] == "X" or frames[i+1] == "/" else int(frames[i+1]))
            score += current_frame_score
            frame_scores.append(current_frame_score)
        i += 2
    return score