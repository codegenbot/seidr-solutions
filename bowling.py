def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            if int(char) == 10:
                score += 10
                frame += 1
            elif frame < 10 and int(char) + 1 > 10:
                if len(frames) - len(frames.replace(str(int(char)) + "/", "")) > 2:
                    score += 10 - int(char)
                    frame += 1
                else:
                    score += int(char) * 2
            else:
                score += int(char)
        elif char == "/":
            if frame < 9 and len(frames.replace("/", "0/").replace("10/", "00/")) > len(
                frames
            ):
                score -= 2
            frame += 1
    return score