def bowling_score(frames):
    score = 0
    frame = ""
    for char in frames:
        if char == "X":
            score += 10
            frame += "X"
        elif char == "/":
            score += int(frame)
            frame = ""
        elif char.isdigit():
            frame += char
        else:
            if frame != "":
                if len(frame) == 1:
                    score += int(frame)
                else:
                    score += int(frame) + int(char)
                frame = ""
    if frame != "":
        score += int(frame)
    return score