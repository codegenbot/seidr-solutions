def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            score += int(char)
            if frame < 10 and score >= 10:
                score -= 10
                if frame == 9:
                    return score + 10
                frame += 1
        elif char == "/":
            score += 10 - int(frames[frames.index(char) - 1])
            frame += 1
    return score