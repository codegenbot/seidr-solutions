def bowling_score(frames):
    score = 0
    for i in range(len(frames)):
        if "/" in frames[i]:
            parts = frames[i].split("/")
            score += min(int(parts[0]), 10) + (10 - int(min(int(parts[0]), 10)) if min(int(parts[0]), 10) < 10 else 0)
        elif "X" in frames[i]:
            score += 10
            if i < len(frames) - 1 and "X" in frames[i+1] or "/" in frames[i+1]:
                continue
            for j in range(i + 1):
                if "X" not in frames[j]:
                    break
                score += 10
        else:
            score += sum(int(part) for part in frames[i].split(" "))
    return score