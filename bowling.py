```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if "-" in frames[i * 2:i * 2 + 2]:
            rolls = list(map(int, frames[i * 2:i * 2 + 2].replace("-", "").split("/")[0]))
            score += 10
        elif "/" in frames[i * 2:i * 2 + 2]:
            rolls = [int(x) for x in frames[i * 2:i * 2 + 2].replace("/", "").split("-")]
            score += sum(rolls)
        else:
            score += int(frames[i * 2:i * 2 + 2])
    return score