def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char == "X":
            score += 30
            frame -= 1
        elif char == "/":
            score += 10 + int(frames[frames.index(char) - 1])
            frame -= 1
        else:
            score += int(char)
    return score