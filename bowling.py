```
def bowling_score(frames):
    frames = frames.replace('/', ' /').split()
    score = 0
    current_roll = 0

    for i, frame in enumerate(frames):
        if len(frame) == 1:
            score += 10
            current_roll = 0
        elif frame == "X":
            score += 10
            current_roll = 0
        else:
            roll = int(frame)
            score += roll
            if i < len(frames) - 1 and frames[i + 1].isdigit():
                next_roll = int(frames[i + 1])
                if roll + next_roll > 10:
                    score += 10
                    current_roll = 0
                else:
                    score += roll + next_roll
                    current_roll = next_roll

    return score