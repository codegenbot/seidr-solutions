def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10 + (int(frames[i+1][:2]) if i < len(frames) - 1 else 5)
            i += 1
        elif frames[i] == "/":
            score += 10 + int(frames[i+1])
            i += 2
        else:
            frame_score = sum(int(c) for c in frames[i:i+2])  
            score += frame_score
            i += 2
    return score