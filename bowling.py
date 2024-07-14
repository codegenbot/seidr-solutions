def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split("/")):
        if len(frame) == 1:
            score += 10 + (10 - int(frame)) * 2
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
        else:
            rolls = list(map(int, frame))
            if sum(rolls) == 10:
                score += sum(rolls)
            elif max(rolls) > 5 and min(roll for roll in rolls if roll < 6):
                score += max(rolls) + min(roll for roll in rolls if roll < 6)
            else:
                score += sum(rolls)
    return score