```
def bowling_score(frames):
    score = 0
    frame_index = 0
    while frame_index < len(frames):
        if frames[frame_index] == "X":
            score += 10
            frame_index += 1
        elif frames[frame_index] == "/":
            score += 10
            frame_index += 2
        else:
            roll1, roll2 = 0, 0
            try:
                roll1 = int(frames[frame_index])
                if frames[frame_index + 1] != "X" and frames[frame_index + 1] != "/":
                    roll2 = int(frames[frame_index + 1])
                frame_index += 1
                score += roll1
                if roll1 + roll2 == 10:
                    score += roll2
            except ValueError:
                pass
    return score