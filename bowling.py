def bowling_score(frames):
    score = 0
    roll_count = [1] * 10
    for frame in frames.split("/"):
        if frame == "X":
            score += 30
            continue
        elif len(frame) > 1:
            score += (10 - int(frame[0])) + int(frame[1])
        else:
            score += int(frame[0])
        roll_count[9] -= 1
    for i in range(2, 11):
        if roll_count[i - 1]:
            score += min(int(frames.split("/")[i - 2].strip()), 10) * (
                10 - sum(roll_count[:i])
            )
        else:
            score += int(frames.split("/")[i - 2].strip()) * 10
    return score