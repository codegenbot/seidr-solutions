def bowling_score(frames):
    score = 0
    roll = 0
    while roll < len(frames) - 1:
        if frames[roll] == "X":
            score += 10
            roll += 1
        elif "/" in frames[roll:roll+3]:
            score += 10
            roll += 2
        else:
            total = int(frames[roll].strip("/")) + int(frames[roll+1].strip("/"))
            if total == 10:
                score += total
                roll += 2
            else:
                score += total
                roll += 2
    return score