```
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
            elif roll < len(frames) - 1:
                score += total
            roll += 2
        else:
            total = int(frames[roll].strip("/")) + int(frames[roll+1].strip("/"))
            if frames[roll+1] == "X":
                score += total + 10
            elif "/" in frames[roll+2]:
                score += total + int(frames[roll+2].split("/")[0])
            else:
                score += total
            roll += 2

    if len(frames) > 0 and (frames[-1] == "X" or frames[-1].strip("/") == "0/"):
        score += 10
    elif len(frames) > 0:
        score += int(frames[-1].strip("/"))

    return score