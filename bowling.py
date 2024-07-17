def bowling_score(frames):
    score = 0
    frame = 0
    for char in frames:
        if char.isdigit():
            score += int(char)
            frame += 1
        elif char == "/":
            score += 10 - (
                10 - int(frames[frames.index(char) - 1])
                if len(frames) > 2 and frames[frames.index(char) - 1].isdigit()
                else 0
            )
            frame += 1
    return score