def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char == "X":
            score += 30
            frame -= 1
        elif char == "/":
            first_roll = int(frames[: frames.index(char)].count("X"))
            second_roll = 10 - first_roll
            score += (first_roll * 10) + second_roll
            frames = frames[frames.index(char) + 1 :]
        else:
            if frame < 3 or (frame > 2 and char == " "):
                continue
            first_roll = int(frames[: frames.index(char)].count("X"))
            second_roll = 10 - first_roll
            score += (first_roll * 10) + second_roll
            frames = frames[frames.index(char) + 1 :]
    return score