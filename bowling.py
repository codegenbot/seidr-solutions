```
def bowling_score(frames):
    score = 0
    frames = frames.replace("-", "/").split("/")
    for i, f in enumerate(frames):
        if f == "X":
            score += 10
            if i < len(frames) - 1:
                score += int(frames[i + 1].lstrip("0"))
        elif f == "":
            score += 10
            if i < len(frames) - 1:
                score += int(frames[i + 1])
        else:
            rolls = [int(roll) for roll in f.split(" ")]
            if sum(rolls) == 10:
                score += 10
            else:
                score += sum(rolls)
    return score