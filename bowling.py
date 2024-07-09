def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10 + sum(int(c) for c in frames[i+1:i+3]) if i+1 < len(frames) and (frames[i+1].strip()[:2] == "9" and frames[i+1].strip()[2] == "X") else int(frames[i+1].strip())
        elif frames[i] == "/":
            score += 10 + int(frames[i-1].strip()) if i-1 >= 0 and frames[i-1].strip().isdigit() else 10
        else:
            frame_score = sum(int(c) for c in frames[i:i+2])
            score += frame_score
        i += 2 if frames[i-1] != "X" and frames[i-1] != "/" else 1
    return score