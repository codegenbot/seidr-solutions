frames = input()
score = 0
i = 0
while i < len(frames):
    frame_score = 0
    if frames[i] == "X":
        frame_score = 10
        if i + 1 < len(frames) and frames[i + 1].isdigit():
            frame_score += int(frames[i + 1])
        i += 2
    elif frames[i] == "/":
        frame_score = 10 - int(frames[i-1])
        i += 1
    else:
        if frames[i].isdigit() and i + 1 < len(frames) and frames[i + 1] == "/":
            frame_score = 10 - int(frames[i])
            i += 2
        elif frames[i].isdigit():
            if i + 1 < len(frames) and frames[i + 1].isdigit():
                frame_score = int(frames[i]) + int(frames[i + 1])
                i += 2
            else:
                frame_score = int(frames[i])
                i += 1
        else:
            frame_score = int(frames[i])
            i += 1 if frame_score != 10 else 2
    score += frame_score
print(score)