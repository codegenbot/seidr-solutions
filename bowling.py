def bowling_score(frames):
    score = 0
    roll = 0
    strike_count = 0
    spare_count = 0

    while roll < len(frames) - 1:
        if frames[roll] == "X":
            score += 10
            if roll < len(frames) - 2 and (frames[roll+1].strip("/") == "X" or "/" in frames[roll+1]):
                score += int(frames[roll+2].split("/")[0])
            elif roll < len(frames) - 2:
                score += int(frames[roll+1].split("/")[0]) + int(frames[roll+1].split("/")[1])
            strike_count += 1
            roll += 2
        elif "/" in frames[roll:roll+3]:
            total = int(frames[roll].strip("/")) + int(frames[roll+1].strip("/"))
            if roll < len(frames) - 2 and (frames[roll+1].strip("/") == "X" or "/" in frames[roll+2]):
                score += total + int(frames[roll+2].split("/")[0])
            else:
                score += total
            spare_count += 1
            roll += 2
        else:
            total = int(frames[roll].strip("/")) + int(frames[roll+1].strip("/"))
            score += total
            roll += 2

    if frames[-1] == "X":
        score += 10
    elif strike_count > 0 and spare_count == 0:
        score += int(frames[-1].split("/")[0]) + int(frames[-1].split("/")[1])
    elif strike_count > 0 and spare_count > 0:
        if spare_count == 2:
            score += int(frames[-1].split("/")[0])
        else:
            score += int(frames[-1].strip("/"))
    elif frames[-1].strip("/") == "X":
        score += 10
    return score