```
def bowling_score(frames):
    frames = frames.replace("\n", "").replace(" ", "")

    score = 0
    roll = 0

    while roll < len(frames) - 1:
        if frames[roll] == "X":
            score += 10
            if roll + 2 < len(frames):
                if frames[roll+1] == "X" and frames[roll+2].isdigit():
                    score += int(frames[roll+2])
                elif "/" in frames[roll+2:]:
                    parts = frames[roll+2:].split("/")
                    total = sum(map(int, filter(str.isdigit, parts)))
                    if len(parts) > 1 and (parts[-1] == "X" or "/" in frames[roll+3:]):
                        score += total + int(parts[-2].split("/")[0])
                    else:
                        score += total
                elif frames[roll+1].isdigit():
                    score += int(frames[roll+1])
        elif "/" in frames[roll:roll+3]:
            parts = frames[roll:roll+3].split("/")
            total = sum(map(int, filter(str.isdigit, parts)))
            if len(parts) > 1 and (parts[-1] == "X" or "/" in frames[roll+3:]):
                score += total + int(parts[-2].split("/")[0])
            else:
                score += total
            roll += 3

        else:
            total = 0
            for i in range(2):
                value = frames[roll+i].strip("/")
                if value.isdigit():
                    total += int(value)
                elif value == "X":
                    total += 10
            score += total
            roll += 2

    if roll < len(frames) and (frames[roll] == "X" or "/" in frames[roll:roll+3]):
        if frames[roll] == "X":
            score += 10
        else:
            parts = frames[roll:].split("/")
            total = sum(map(int, filter(str.isdigit, parts)))
            if len(parts) > 1 and (parts[-1] == "X" or "/" in frames[roll+3:]):
                score += total + int(parts[-2].split("/")[0])
            else:
                score += total
        roll += 2

    return score

print(bowling_score("9-3,5-,7+2,4+,8/3,7/,1/2/X,X/10"))