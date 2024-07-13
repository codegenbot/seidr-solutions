```
def bowling_score(frames):
    score = 0
    frame_count = 1
    for i in range(len(frames)):
        if frames[i] == "X":
            score += strike_frame()
        elif frames[i] == "/":
            score += spare_frame(int(frames[i-1]))
        else:
            score += normal_frame(int(frames[i]), int(frames[i+1]) if i < 9 else 0)
        frame_count -= 1
    return score

def strike_frame():
    return 30

def spare_frame(pins):
    return 10 + pins

def normal_frame(pins1, pins2=0):
    if pins1 == 10:
        return 10 + 10 + pins2
    else:
        return pins1 + pins2