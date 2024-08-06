def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i]:
            strike = False
            spare = False
            parts = frames[i].split("/")
            if len(parts) == 2:
                first_roll = int(parts[0])
                second_roll = int(parts[1])
                score += first_roll + second_roll
            elif len(parts) == 3:
                first_roll = int(parts[0])
                strike = True
        else:
            parts = frames[i]
            rolls = [int(x) for x in parts]
            if sum(rolls) < 10:
                score += sum(rolls)
            else:
                score += 10
        if i < 9 and (strike or spare):
            next_frame = frames[i + 1].split("/")
            if len(next_frame) == 2:
                score += int(next_frame[0]) + int(next_frame[1])
            elif len(next_frame) == 3:
                score += int(next_frame[0])
    return score