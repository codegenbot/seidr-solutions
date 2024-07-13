```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            if i + 2 < len(frames):
                score += 10 + int(frames[i+1]) + int(frames[i+2])
            else:
                score += 10 + 10 - (int(frames[i-1]) or 0)
            i += 3
        elif frames[i].isdigit():
            frame_score = sum(int(x) for x in frames[i:i+2]) or 10
            if i < len(frames) and frames[i+1].isdigit():
                score += int(frames[i]) + int(frames[i+1])
            else:
                score += frame_score
        i += 1
    return score