```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10
            if i+1 < len(frames) and frames[i+1].isdigit():
                score += int(frames[i+1])
            if i+2 < len(frames):
                score += int(frames[i+2])
            i += 2
        elif frames[i] == "/":
            score += 10
            frame_score = 0
            for j in range(i+1, len(frames)):
                if frames[j].isdigit():
                    frame_score = int(frames[j])
                    break
            score += frame_score
            i += 2
        else:
            frame_score = 0
            for j in range(int(frames[i])):
                if i < len(frames) - 1 and frames[i+1].isdigit():
                    frame_score += 10 - int(frames[i])
                    break
                else:
                    frame_score += 10 - int(frames[i])
            score += frame_score
            i += 2
    return score