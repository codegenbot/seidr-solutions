def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            if i + 1 < len(frames) and frames[i+1] == "/":
                score += 10 + int(frames[i+2])
            elif i + 1 < len(frames):
                score += 10 + int(frames[i+1]) + int(frames[i+2])
            else:
                score += 10 + 10
            i += 3
        elif frames[i] == "/":
            if i + 1 >= len(frames) or frames[i+1].isdigit():
                score += 10
            else:
                score += 10 + int(frames[i+1])
            i += 2
        else:
            frame_score = sum(int(x) for x in frames[i:i+2]) or 10
            score += frame_score
        i += 2
    return score