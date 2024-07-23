def bowling_score(frames):
    frames = frames.replace('/', ' /').split()
    score = 0

    for i, frame in enumerate(frames):
        if frame == "X":
            score += 10
            continue
        elif len(frame) > 1:  # Spare
            score += int(frame[0]) + 1
            continue
        else:  # Non-spare
            score += int(frame)
            if i < len(frames) - 1 and frames[i+1].isdigit():
                current_roll = int(frame)

    return score