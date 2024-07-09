def bowling_score(frames):
    score = 0
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
            score += 10 + (10 - len(frames[:i].count("X")))
        else:
            strike_count = 0
            for j in range(i + 1):
                if "X" in frames[j]:
                    strike_count += 1
            if strike_count == i + 1:
                score += 10 * (i + 1)
            else:
                score += sum(int(part) for part in frames[i].split(" "))
    return score