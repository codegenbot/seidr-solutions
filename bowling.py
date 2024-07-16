```Python
frames = input().split()
score = 0
i = 0
while i < len(frames):
    if frames[i] == "X":
        score += 10
        i += 1
    elif frames[i] == "/":
        if i + 1 < len(frames) and frames[i+1].isdigit():
            score += 10 - int(frames[i+1])
        i += 2
    else:
        frame_score = int(frames[i]) + (int(frames[i+1]) if i + 1 < len(frames) and frames[i+1].isdigit() else 0)
        if frame_score == 10:
            i += 2
        else:
            score += frame_score
            i += 1

print(score)