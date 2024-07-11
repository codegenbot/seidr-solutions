```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            if len(frames[i+1]) == 1:
                roll1 = int(frames[i])
                roll2 = 10 - roll1
                frame_scores = [roll1] + ([roll1, roll2] if i < 8 else [roll1])
            else:
                frame_scores = list(map(int, [frames[i], frames[i+1]]))
        else:
            frame_scores = list(map(int, frames[i].split('/')))
        score += sum(frame_scores)
    return score