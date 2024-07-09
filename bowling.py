def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10
            i += 1
            if i+1 < len(frames) and frames[i].strip() == "X":
                score += 10
            elif i+1 < len(frames):
                score += int(frames[i].strip())
        elif frames[i] == "/":
            frame_score = 10 - int(frames[i-1].strip())
            if i+1 < len(frames) and frames[i+1].strip()[:2] == "10":
                frame_score += 10
            else:
                frame_score += int(frames[i+1].strip())
            score += frame_score
            i += 2
        else:
            frame_score = sum(int(c) for c in frames[i:i+2])
            score += frame_score
            i += 2
    return score