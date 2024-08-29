def bowling_score(frames):
    score = 0
    next_frame = ""
    for i in range(len(frames)):
        if frames[i] == "X":
            score += 10
            if i < len(frames) - 1:
                next_frame = frames[i + 1]
                if next_frame == "X":
                    score += 10
                    next_frame = frames[i + 2]
                elif next_frame == "/":
                    score += 10
                    next_frame = frames[i + 3]
                else:
                    score += int(next_frame)
        elif frames[i] == "/":
            if i < len(frames) - 1 and frames[i + 1].isdigit():
                score += 10 + int(frames[i + 1])
                continue
            score += 10
        else:
            score += int(frames[i])
        if i < len(frames) - 1:
            next_frame = frames[i + 1]
            if next_frame == "X":
                score += 10
                if i < len(frames) - 2 and frames[i + 2].isdigit():
                    score += int(frames[i + 2])
            elif next_frame == "/":
                score += 10
        if i >= len(frames) - 2:
            break
    return score