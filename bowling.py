def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10
            if i+2 < len(frames):
                if frames[i+1].strip() == "X" and frames[i+2].strip()[:2] == "10":
                    score += 10
                elif frames[i+1].strip()[:2] == "10":
                    score += 10
                else:
                    score += int(frames[i+1].strip())
            i += 1
        elif frames[i] == "/":
            frame_score = 10
            if i+2 < len(frames):
                if frames[i+1].strip() == "X" and frames[i+2].strip()[:2] == "10":
                    frame_score += 20
                elif frames[i+1].strip() == "X":
                    frame_score += 10 + int(frames[i+2].strip())
                else:
                    frame_score += 10 + int(frames[i+1].strip())
            else:
                frame_score += 10 + int(frames[i+1].strip())
            score += frame_score
            i += 2
        else:
            if len(frames[i:i+2]) == 3:
                frame_score = 10 + int(frames[i].strip()) + int(frames[i+1].strip())
            else:
                frame_score = sum(int(c) for c in frames[i:i+2])
            score += frame_score
            i += 2
    return score