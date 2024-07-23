def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X": 
            score += 10 + (int(frames[i+1]) if i+1 < len(frames) else 0) + (int(frames[i+2]) if i+2 < len(frames) else 0)
            i += 2
        elif frames[i] == "/":
            score += 10 + int(frames[i+1])
            i += 2
        else:
            score += int(frames[i]) * 10 + (int(frames[i+1]) if i+1 < len(frames) else 0)
            i += 2
    return score