def bowling_score(frames):
    score = 0
    frame = 0
    for char in frames:
        if char.isdigit():
            score += int(char)
            if frame < 9 and char == "X":
                score += 10
                frame += 1
        elif char == "/":
            score += 10 - int(frames[frames.index(char) - 1])
            frame += 1
    return score