```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10
            i += 1
            if i < len(frames) and frames[i] == "X":
                score += 10 + int(frames[i + 1])
                i += 2
            elif i < len(frames) and frames[i] == "/":
                score += 10 + int(frames[i + 1]) // 2
                i += 2
        elif frames[i] == "/":
            score += 10 + int(frames[i + 1]) // 2
            i += 2
        else:
            current_frame_score = 0
            for j in range(2):
                if i + j >= len(frames) or (frames[i + j] == "X" and j != 0):
                    current_frame_score += 10
                    break
                elif frames[i + j] == "/":
                    current_frame_score += int(frames[i + j + 1]) // 2
                    break
                else:
                    current_frame_score += int(frames[i + j])
            score += current_frame_score
            i += 2
    return score