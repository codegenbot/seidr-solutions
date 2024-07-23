```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10
            i += 1
            if i < len(frames) and (frames[i] == "X" or frames[i] == "/"):
                score += 10
                i += 1
            elif i < len(frames):
                score += int(frames[i])
                i += 1
        elif frames[i] == "/":
            score += 10
            i += 1
            if i < len(frames):
                score += int(frames[i])
                i += 1
        else:
            frame_score = sum(int(x) for x in frames[i:i+2])
            score += frame_score
            i += 2
    return score