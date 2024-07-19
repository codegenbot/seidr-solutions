```Python
def bowling_score(frames):
    score = 0
    roll = 0

    while roll < len(frames) - 1:
        if frames[roll] == "X":
            score += 10
            roll += 2
        elif "/" in frames[roll:roll+3]:
            total = int(frames[roll].strip("/")) + int(frames[roll+1].strip("/"))
            if roll < len(frames) - 2 and (frames[roll+1].strip("/") == "X" or "/" in frames[roll+2]):
                score += total + int(frames[roll+2].split("/")[0])
            else:
                score += total
            roll += 2
        else:
            total = int(frames[roll].strip("/")) + int(frames[roll+1].strip("/"))
            score += total
            roll += 2

    if roll < len(frames) - 2 and (frames[-2] == "X" or "/" in frames[-3:]):
        if frames[-1] == "X":
            score += 10
        else:
            total = int(frames[-2].strip("/")) + int(frames[-1].strip("/"))
            if frames[-1].strip("/") == "X":
                score += total + 10
            else:
                score += total
    elif frames[-1] == "X":
        score += 10
    elif "/" in frames[-2:]:
        total = int(frames[-2].strip("/")) + int(frames[-1].strip("/"))
        score += total
    else:
        score += int(frames[-1].strip("/"))

    return score