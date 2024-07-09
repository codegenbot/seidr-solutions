```
def bowling_score(frames):
    score = 0
    strike_count = 0
    for i in range(10):
        if "/" in frames[i]:
            parts = frames[i].split("/")
            if len(parts) == 2:
                score += min(int(parts[0]), 10)
                if int(parts[0]) < 10:
                    score += 10 - int(parts[0])
            else:
                score += 10
        elif "X" in frames[i]:
            score += 10
            strike_count = i + 1
        else:
            score += sum(int(part) for part in frames[i].split(" "))
    while strike_count < 10:
        if "/" in frames[strike_count]:
            parts = frames[strike_count].split("/")
            score += min(int(parts[0]), 10) + min(int(parts[1]), 10)
        elif "X" in frames[strike_count]:
            score += 10
            strike_count += 1
        else:
            score += sum(int(part) for part in frames[strike_count].split(" "))
        strike_count += 1
    return score