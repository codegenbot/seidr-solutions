```
def bowling_score(s):
    score = 0
    frames = s.replace("/","2").replace("X","10").replace("S","5")
    for i in range(0,len(frames),1):
        if frames[i].isdigit():
            if len(frames)-i <= 1:
                score += int(frames[i])
            elif len(frames)-i == 2 and frames[i:i+2].isdigit():
                score += int(frames[i:i+2])
            else:
                frame_score = int(frames[i])
                if i+1 < len(frames):
                    if frames[i+1].isdigit():
                        frame_score += int(frames[i+1])
                    elif frames[i+1] == "X":
                        frame_score += 10
                    elif frames[i+1] == "/":
                        frame_score += 2
                if i+2 < len(frames):
                    if frames[i+1:i+3].isdigit():
                        if int(frames[i+1:i+3]) >= 10:
                            score += 10 + int(frames[i+1:i+3]) - 10
                        else:
                            frame_score += int(frames[i+1:i+3])
                    elif frames[i+1:i+3][0] == "X":
                        if int(frames[i+1:i+2]) >= 8:
                            score += 10 + (int(frames[i+1:i+2]) - 9) * 2
                        else:
                            frame_score += 10
                    elif frames[i+1:i+3][0] == "/":
                        frame_score += 2
                if i == 9 and int(frames[i:i+1]) < 5:
                    score += 20 + int(frames[i])
                else:
                    score += frame_score
    return score