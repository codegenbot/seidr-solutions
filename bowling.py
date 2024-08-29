def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames:
        if frame == "X":
            score += 30
            roll = 1
        elif "/" in frame:
            parts = frame.split("/")
            first_roll = int(parts[0])
            second_roll = int(parts[1].lstrip("X"))
            score += first_roll + second_roll
            roll = 2
        else:
            for char in frame:
                if char.isdigit():
                    score += int(char)
                    roll += 1
    return score