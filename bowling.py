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
                if i < len(frames) - 2 and frames[i + 2] == "X":
                    score += 10 + roll
                    current_roll = 0
                else:
                    current_roll = roll

    return score