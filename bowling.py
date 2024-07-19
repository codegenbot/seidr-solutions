```
def bowling_score(frames):
    score = 0
    current_frame = 0
    for i in range(len(frames)):
        if frames[i] == "X":
            score += 10
            current_frame += 1
        elif frames[i] == "/":
            if current_frame < 9:
                score += 10
                current_frame += 1
        else:
            if int(frames[i].strip("/")) + int(frames[i+1]) == 10:
                score += 10
                i += 1
                current_frame += 1
            else:
                score += int(frames[i].strip("/")) + int(frames[i+1])
                current_frame += 2
    return score