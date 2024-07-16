```
def bowling_score(frames):
    score = 0
    frames_counted = 0
    for i in range(10):
        if "-" in frames[i * 2:i * 2 + 2]:
            rolls = list(map(int, frames[i * 2:i * 2 + 2].replace("/", "").split("-")))
            score += sum(rolls)
        elif "X" in frames[i * 2:i * 2 + 1]:
            score += 10
            frames_counted += 1
        else:
            rolls = list(map(int, frames[i * 2:i * 2 + 2].replace("/", "").split("/")))
            if sum(rolls) == 10:
                score += 10
            else:
                score += sum(rolls)
        if frames_counted == 9 and i < 9:
            for j in range(i+1, 10):
                if "X" in frames[j * 2:j * 2 + 1]:
                    score += 10
                elif "/" in frames[j * 2:j * 2 + 2]:
                    rolls = list(map(int, frames[j * 2:j * 2 + 2].replace("/", "").split("/")))
                    score += sum(rolls)
                else:
                    rolls = list(map(int, frames[j * 2:j * 2 + 2].replace("/", "").split("-")))
                    score += sum(rolls)
    return score