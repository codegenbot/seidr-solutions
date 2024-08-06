def bowling_score(frames):
    score = 0
    frame_num = 1
    for char in frames:
        if char.isdigit():
            score += int(char)
            if frame_num < 10 and score > 29:
                return -1
        elif char == "/":
            score += 10 - (10 - int(frames[frames.index(char) - 1]))
            frame_num += 1
        else:
            if char == "X":
                score += 30
                frame_num += 1
            else:
                strike = False
                for i in range(2):
                    if frames[frames.index(char) + i].isdigit():
                        score += int(frames[frames.index(char) + i])
                    elif frames[frames.index(char) + i] == "/":
                        score += 10 - (10 - int(frames[frames.index(char) - 1]))
                        frame_num += 1
                        strike = True
                        break
                if not strike:
                    frame_num += 1
    return score