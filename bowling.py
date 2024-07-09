```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10
            if i+1 < len(frames) and (frames[i+1].strip()[:2] == "//" or frames[i+1].strip()[:2] == "9X"):
                score += int(frames[i+1].strip()[2:])
        elif frames[i] == "/":
            if i-1 >= 0 and not (frames[i-1].strip().isdigit()):
                score += 10
            else:
                frame_score = int(frames[i-1].strip()) + int(frames[i].strip())
                score += frame_score
            if i+1 < len(frames) and frames[i+1].strip()[:2] == "9X":
                score += int(frames[i+1].strip()[2:])
        else:
            frame_score = sum(int(c) for c in frames[i:i+2])
            score += frame_score
        i += 1
    return score