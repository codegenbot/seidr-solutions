```
def bowling_score(frames):
    score = 0
    roll = 0
    while roll < len(frames) - 1:
        if frames[roll] == "X":
            score += 10
            roll += 1
            if roll < len(frames) - 2 and (frames[roll+1].strip("/") == "X" or "/" in frames[roll+1]):
                score += int(frames[roll+1].split("/")[0])
            elif roll < len(frames) - 2:
                score += int(frames[roll+1].split("/")[0]) + int(frames[roll+1].split("/")[1])
            if roll == len(frames) - 2:
                break
        elif "/" in frames[roll:roll+3]:
            total = int(frames[roll].strip("/")) + int(frames[roll+1].strip("/"))
            score += total
            roll += 2
        else:
            total = int(frames[roll].strip("/")) + int(frames[roll+1].strip("/"))
            score += total
            roll += 2
    if roll < len(frames) - 1 and frames[-1] == "X":
        score += 10
    elif roll < len(frames) - 1:
        score += int(frames[roll].split("/")[0]) + int(frames[roll].split("/")[1])
    else:
        score += int(frames[-1].strip("/"))
    return score

print(bowling_score("3/X8--525X27X2161"))