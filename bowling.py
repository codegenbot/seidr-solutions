def bowling_score(frames):
    frames = [int(x) for x in frames.replace('/', '+')]
    score = 0
    for i in range(0, len(frames), 2):
        if i + 1 < len(frames):
            roll1, roll2 = frames[i], frames[i+1]
        else:
            roll1, = frames[i],
        
        if roll1 + roll2 == 10:  # spare
            score += 10
            if i < 8:
                score += frames[i+2]
        elif roll1 == 10:  # strike
            score += 10
            if i < 8:
                score += frames[i+1] + frames[i+2]
        else:  # regular frame
            score += roll1 + roll2
    
    return score