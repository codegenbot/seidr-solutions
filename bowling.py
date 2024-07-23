```
def bowling_score(frames):
    score = 0
    frame_number = 1
    for i in range(len(frames)):
        if frames[i] == "X":
            if frame_number < 3:
                score += 10 + int(frames[i+2]) + int(frames[i+3])
            else:
                score += 10
        elif len(frames[i:i+2]) == 2:
            if frame_number < 9 and frames[i] == "5" and frames[i+1] == "/":
                if frames[i+2].isdigit():
                    score += int(frames[i]) + int(frames[i+1]) + int(frames[i+2])
                else:
                    score += int(frames[i]) + int(frames[i+1]) + 10
            elif frame_number < 9 and int(frames[i]) + int(frames[i+1]) == 10:
                if frames[i+2].isdigit():
                    score += int(frames[i]) + int(frames[i+1]) + int(frames[i+2])
                else:
                    score += int(frames[i]) + int(frames[i+1]) + 10
            else:
                score += int(frames[i]) + int(frames[i+1])
        else:
            if frame_number == 10 and frames[i].isdigit() and int(frames[i]) + int(frames[i+1]) == 10:
                score += int(frames[i]) + int(frames[i+1])
            else:
                score += int(frames[i]) + int(frames[i+1])
        frame_number += 1
    return score