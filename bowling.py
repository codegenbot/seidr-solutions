def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 30
            if i + 1 < len(frames) and frames[i+1].isdigit():
                score += int(frames[i+1])
            if i + 2 < len(frames) and frames[i+2].isdigit():
                score += int(frames[i+2])
            i += 3
        elif frames[i] == "/":
            frame_score = 10
            if i + 1 < len(frames) and frames[i+1].isdigit():
                frame_score += int(frames[i+1])
            if i + 2 >= len(frames):
                score += frame_score
            else:
                if frames[i+2] == "X":
                    score += frame_score + 30
                elif frames[i+2] == "/":
                    score += frame_score + 10
                else:
                    score += frame_score + int(frames[i+2])
            i += 2
        else:
            pins = int(frames[i])
            if i < 8 and (frames[i+1] == "X" or frames[i+1] == "/"):
                score += 10 + 30
                i += 1
            elif i < 9 and (frames[i+2].isdigit() and not frames[i+3].isdigit()):
                frame_score = 10 + pins
                if i < 8:
                    score += frame_score + int(frames[i+2])
                else:
                    score += frame_score
                i += 3
            else:
                score += 10 * (pins + 1)
                i += 2
    return score