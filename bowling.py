```
def bowling_score(frames):
    score = 0
    roll = 0

    while roll < len(frames) - 1:
        if frames[roll] == "X":
            score += 10
            roll += 2
        elif "/" in frames[roll:roll+3]:
            parts = frames[roll:roll+3].split("/")
            total = sum(map(int, filter(str.isdigit, parts)))
            if len(parts) > 1 and (parts[-1] == "X" or "/" in frames[roll+2]):
                score += total + int(parts[-1])
            else:
                score += total
            roll += 3

        else:
            total = sum(map(int, filter(str.isdigit, frames[roll:roll+2].split(","))))
            score += total
            roll += 2

    if len(frames) > roll and (frames[roll] == "X" or "/" in frames[roll:roll+2]):
        if frames[roll] == "X":
            score += 10
        else:
            parts = frames[roll:].split("/")
            total = sum(map(int, filter(str.isdigit, parts)))
            if len(parts) > 1 and (parts[-1] == "X" or "/" in frames[roll+1]):
                score += total + int(parts[-1])
            else:
                score += total
        roll += 2

    return score