def bowling_score(frames):
    frames = frames.replace('/', ' /').split()
    score = 0

    for i, frame in enumerate(frames):
        if frame == "X":  
            score += 10
            if i < len(frames) - 1 and frames[i + 1] != "X":
                score += int(frames[i + 1])
        elif frame[0] == "/":  
            score += 5
            if i < len(frames) - 1:
                score += int(frame[1:])
        else:  
            score += int(frame)
        if score > 10 and score % 10 == 0:  
            score -= (score // 10)

    return score