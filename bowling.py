```
def bowling_score(frames):
    score = 0
    roll = 0

    while roll < len(frames) - 1:
        if frames[roll] == "X":
            score += 10
            if roll < len(frames) - 2 and (frames[roll+1].strip("/") == "X" or "/" in frames[roll+1]):
                try:
                    score += int(frames[roll+2].split("/")[0])
                except IndexError:
                    pass
            elif roll < len(frames) - 2:
                try:
                    score += int(frames[roll+1].split("/")[0]) + int(frames[roll+1].split("/")[1])
                except IndexError:
                    pass
            strike_count = 1
            roll += 2
        elif "/" in frames[roll:roll+3]:
            total = int(frames[roll].strip("/")) + int(frames[roll+1].strip("/"))
            if roll < len(frames) - 2 and (frames[roll+1].strip("/") == "X" or "/" in frames[roll+2]):
                try:
                    score += total + int(frames[roll+2].split("/")[0])
                except IndexError:
                    pass
            else:
                score += total
            spare_count = 1
            roll += 2
        else:
            total = int(frames[roll].strip("/")) + int(frames[roll+1].strip("/"))
            score += total
            roll += 2

    if roll == len(frames) - 1 and frames[-1] == "X":
        score += 10
    elif strike_count > 0 and spare_count == 0:
        try:
            score += int(frames[-1].split("/")[0]) + int(frames[-1].split("/")[1])
        except IndexError:
            pass
    elif strike_count > 0 and spare_count > 0:
        if spare_count == 2:
            try:
                score += int(frames[-1].split("/")[0])
            except IndexError:
                pass
        else:
            try:
                score += int(frames[-1].strip("/"))
            except IndexError:
                pass
    elif frames[-1].strip("/") == "X":
        score += 10
    return score

print(bowling_score("3/X8--525X27X2161"))