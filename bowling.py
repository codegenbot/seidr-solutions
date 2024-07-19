"""
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
            if len(parts) > 1 and (parts[-1] == "X" or "/" in frames[roll+3]):
                score += total + int(parts[-2].split("/")[0])
            else:
                score += total
            roll += 3

        else:
            total = 0
            for i in range(2):
                if frames[roll+i] == "X":
                    total += 10
                    break
                elif "/" in frames[roll:roll+3]:
                    parts = frames[roll:roll+3].split("/")
                    total += sum(map(int, filter(str.isdigit, parts)))
                    roll += 3
                    break
                else:
                    total += int(frames[roll+i].strip("/"))
            score += total
            roll += 2

    if len(frames) > roll and (frames[roll] == "X" or "/" in frames[roll:roll+3]):
        if frames[roll] == "X":
            score += 10
        else:
            parts = frames[roll:].split("/")
            total = sum(map(int, filter(str.isdigit, parts)))
            if len(parts) > 1 and (parts[-1] == "X" or "/" in frames[roll+3]):
                score += total + int(parts[-2].split("/")[0])
            else:
                score += total
        roll += 2
    elif len(frames) > roll and frames[roll] != "/":
        score += int(frames[roll].strip("/"))

    return score

print(bowling_score("9-3,5-,7+2,4+,8/3,7/,1/2/X,X/10"))