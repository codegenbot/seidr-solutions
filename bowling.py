```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10 + (int(frames[i+1].strip()[:2]) if i < len(frames) - 1 else 0)
            i += 1 if i < len(frames) - 1 else 2
        elif frames[i] == "/":
            if i < len(frames) - 1:
                score += 10 + int(frames[i+1].strip())
                i += 2
            else:
                score += 10
                i += 1
        else:
            frame_score = sum(int(c) for c in frames[i:i+2])
            score += frame_score
            i += 2
    return score