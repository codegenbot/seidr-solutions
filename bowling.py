def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            score += int(char)
            if frame < 10 and (score >= 10 or (frame == 9 and score >= 8)):
                return "Invalid input"
        elif char == "/":
            score += 10 - int(frames[frames.index(char) - 1])
            frame += 1
        else:
            score += 10
            frame += 1
    return score