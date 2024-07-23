def bowling_score(frames):
    score = 0
    frame = 1
    prev_frame = 0
    for char in frames:
        if char.isdigit():
            score += int(char)
            if frame < 10 and (int(char) == 10 or int(char) + 1 > 10):
                if int(char) == 10:
                    score -= 10
                else:
                    score -= 10 - int(char)
                prev_frame = frame
                frame += 1
        elif char == "/":
            score += 10
            frame += 1
    # handle last frame special case
    if (
        frame < 10
        and frames[prev_frame - 1].isdigit()
        and int(frames[prev_frame - 1]) + 1 <= 10
    ):
        score -= 10 - int(frames[prev_frame - 1])
    return score