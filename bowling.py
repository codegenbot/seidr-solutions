def bowling_score(frames):
    score = 0
    roll = 1
    for i in range(10):
        if "/" in frames[roll:roll+2]:
            if frames[roll] == "X":
                score += 10
            elif int(frames[roll].strip("/")) + int(frames[roll+1]) == 10:
                score += 10
            else:
                score += 10
                roll += 2
        else:
            if frames[roll] == "X":
                score += 10
                roll += 1
            elif int(frames[roll].strip("/")) + int(frames[roll+1]) == 10:
                score += 10
                roll += 2
            else:
                score += int(frames[roll]) + int(frames[roll+1])
        if roll < 20 and "/" in frames[roll:roll+2]:
            score += int(frames[roll].strip("/")) + int(frames[roll+1].strip("/"))
        roll += 2
    return score