```
def bowling_score(frames):
    score = 0
    next_frame = ""
    for i in range(len(frames)):
        if frames[i] == "X":
            score += 10
            if i < 9:
                next_frame = frames[i+1]
        elif frames[i] == "/":
            frame_score = int(frames[i+1])
            score += 10 + frame_score
        else:
            if i < 9 and frames[i+1] in "X/":
                bonus = 0
                if frames[i+1] == "X":
                    next_frame = frames[i+2]
                    bonus = 10 + int(next_frame) + int(frames[i+3])
                elif frames[i+1] == "/":
                    frame_score = int(frames[i+2])
                    bonus = 10 + frame_score
                score += 10 + int(frames[i]) + bonus
            else:
                frame_score = int(frames[i]) + int(frames[i+1])
                score += frame_score
    return score