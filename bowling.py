def bowling_score(frames):
    score = 0
    frame_count = 0
    for char in frames:
        if char == "X":
            score += 30
            frame_count += 1
        elif char == "/":
            if frame_count < 9:
                score += 10 + int(frames[frames.index(char) - 1])
                frame_count += 1
        else:
            if int(char) > 0:
                if frame_count < 9:
                    score += 1 * int(char)
                    frame_count += 1
    return score