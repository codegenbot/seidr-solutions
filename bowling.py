def bowling_score(frames):
    score = 0
    frames = frames.replace("-", "/").split("/")
    for i, f in enumerate(frames):
        if f == "X":
            score += 10
            if i < len(frames) - 1:
                score += int(flatten(f).lstrip("0")) if flatten(f).else 0
        elif f.strip() == "":
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

def flatten(f):
    while "" in f and len(f) > 0:
        f = f.replace("", "0")
    return f