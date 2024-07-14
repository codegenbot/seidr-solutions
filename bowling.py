def bowling_score(frames):
    score = 0
    frame_num = 1
    for char in frames:
        if char.isdigit():
            if frame_num < 10:
                score += int(char)
            else:
                if frame_num == 10 and int(char) < 10:
                    return -1
        elif char == "/":
            if frame_num < 10:
                score += 10
            frame_num += 1
        elif char == "X":
            score += 10
            frame_num += 1
        else:
            if frame_num == 10 and char != "-":
                return -1
            if frame_num < 10:
                score += int(char)
            else:
                score += 10 - int(char)
            frame_num += 1
    return score