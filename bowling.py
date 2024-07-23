def bowling_score(frames):
    frames = frames.replace("/", " /").split()
    score = 0
    current_roll = 0
    spare = False
    strike = False

    for frame in range(len(frames)):
        if len(frames[frame]) == 1:
            score += 10
            strike = True
            current_roll = 0
        elif frames[frame] == "X":
            score += 10
            strike = True
            current_roll = 0
        else:
            roll = int(frames[frame])
            if roll + " /" in " /".join(frames[min(frame + 1, len(frames) - 1) :]):
                score += roll + (10 - roll)
                spare = True
                current_roll = 0
            elif strike:
                score += roll + current_roll
                strike = False
            else:
                score += roll
                if frame < len(frames) - 1 and frames[frame + 1].isdigit():
                    current_roll = int(frames[frame + 1])

    return score