```
def bowling_score(frames):
    score = 0
    frame_num = 1
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            if frame_num < 10:
                score += 10
                if frame_num < 9:
                    score += int(frames[i+2])
                    if int(frames[i+2]) >= 10:
                        score += int(frames[i+4])
                else:
                    score += int(frames[i+2])
            else:
                score += 10 + int(frames[i+1]) + int(frames[i+3])
            frame_num += 1
        elif frames[i] == "/":
            score += 10 + int(frames[i+1]) + int(frames[i+2])
            frame_num += 1
        else:
            for j in range(len(frames[i:i+2])):
                if i < len(frames) - 1 and i+2 < len(frames):
                    if frames[i+j] == "X":
                        score += (10 - int(frames[i+j])) + 10
                    elif frames[i+j] == "/":
                        score += 10 - int(frames[i+j]) + 10
                else:
                    score += int(frames[i+j])
            frame_num += 1
    return score