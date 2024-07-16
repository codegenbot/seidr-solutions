```
def bowling_score(frames):
    score = 0
    frames = [int(i) if i.isdigit() else i for i in frames.split()]
    i = 0
    while i < len(frames):
        frame_score = "0"
        if frames[i] == "X":
            if i + 1 < len(frames) and frames[i+1] == "/":
                frame_score = str(10 - int(frames[i+2]))
            else:
                frame_score = "10"
            i += 1
        elif frames[i] == "/":
            frame_score = str(10 - int(frames[i-1]))
            i += 1
        else:
            if i + 1 < len(frames) and frames[i+1] == "X":
                frame_score = "10"
                i += 2
            elif i + 1 < len(frames) and frames[i+1].isdigit():
                frame_score = str(int(frames[i]) + int(frames[i+1]))
                i += 2
            else:
                frame_score = str(frames[i])
                i += 1
        score += int(frame_score)
    return score

frames = input()
print(bowling_score(frames))