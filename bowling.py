def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 30
            i += 1
        elif frames[i] == "/":
            frame_score = 10 + int(frames[i + 1])
            if i < 8 and frames[i+2].isdigit():
                score += frame_score + int(frames[i+3])
            else:
                score += frame_score
            i += 2
        else:
            pins = int(frames[i])
            if i < 8 and frames[i+2] == "X":
                score += 10 + 30
                i += 1
            elif i < 9 and (frames[i+2] == "/" or not frames[i+2].isdigit()):
                frame_score = 10 + pins
                if i < 8:
                    score += frame_score + int(frames[i+3])
                else:
                    score += frame_score
                i += 3
            else:
                score += 10 * (pins + 1)
                i += 2
    return score