```python
def bowling_score(frames):
    score = 0
    roll = 0
    while roll < len(frames) - 1:
        if frames[roll] == "X":
            score += 10
            if roll < len(frames) - 2 and (frames[roll+1].strip("/") == "X" or "/" in frames[roll+1]):
                score += int(frames[roll+2].split("/")[0])
            else:
                score += int(frames[roll+1].split("/")[0]) + int(frames[roll+1].split("/")[1])
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
    return score