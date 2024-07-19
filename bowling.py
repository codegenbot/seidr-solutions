def bowling_score(frames):
    score = 0
    roll = 0
    while roll < len(frames) - 1:
        if frames[roll] == "X":
            if roll+2 >= len(frames):  
                score += 10 + 10 * (len(frames) - roll - 1)
            else:
                score += 10
            roll += 1
        elif "/" in frames[roll:roll+3]:
            total = int(frames[roll].strip("/")) + int(frames[roll+1].strip("/"))
            if roll+2 >= len(frames):  
                score += 10 + 10 * (len(frames) - roll - 1)
            else:
                score += total + 10
            roll += 2
        else:
            total = int(frames[roll].strip("/")) + int(frames[roll+1].strip("/"))
            score += total
            roll += 2
    return score