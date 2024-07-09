def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10
            if i+1 < len(frames) and (frames[i+1].strip() == "/" or frames[i+1].strip()[:2] == "9" and frames[i+1].strip()[2] == "X"):
                if i+2 < len(frames):
                    score += int(frames[i+2].strip())
            else:
                if i+1 < len(frames):
                    score += int(frames[i+1].strip())
        elif frames[i] == "/":
            if i-1 >= 0 and frames[i-1].strip().isdigit():
                score += int(frames[i-1].strip())
            else:
                score += 10
            if i+1 < len(frames) and (frames[i+1].strip()[:2] == "9" and frames[i+1].strip()[2] == "X"):
                if i+2 < len(frames):
                    score += int(frames[i+2].strip())
        else:
            frame_score = sum(int(c) for c in frames[i:i+2])
            score += frame_score
        i += 2 if frames[i-1] != "X" and frames[i-1] != "/" else 1
    return score