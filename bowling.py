def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10
            if i < len(frames) - 1:
                if frames[i+1].strip()[:2] == "10":
                    score += 10
                else:
                    score += int(frames[i+1].strip())
            if i < len(frames) - 2 and frames[i+1].strip() == "X" or frames[i+1].strip()[:2] == "10":
                score += 10
            i += 1
        elif frames[i] == "/":
            frame_score = 10
            if i < len(frames) - 1:
                frame_score += int(frames[i+1].strip())
            score += frame_score
            i += 2
        else:
            frame_score = sum(int(c) for c in frames[i:i+2])
            score += frame_score
            i += 2
    return score