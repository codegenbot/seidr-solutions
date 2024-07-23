```
def single_frame_score(frame):
    if frame == "X":
        return 10 + 1 + int(single_frame_score(frames[i+1]))
    elif frame == "/":
        return 10 + int(frames[i+2])
    else:
        return int(frame) * 1 + int(frame)*1

def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += single_frame_score(frames[i])
            i += 1
        elif frames[i] == "/":
            score += single_frame_score(frames[i])
            i += 2
        else:
            frame1, frame2 = int(frames[i]), int(frames[i+1])
            if frame1 + frame2 >= 10:
                score += 10
            else:
                score += frame1 * 1 + frame2 * 1
            i += 2
    return score