```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if "/" in frames[i]:
            parts = frames[i].split("/")
            if len(parts) == 1:
                score += int(parts[0])
            else:
                score += max(int(part) for part in parts)
                if i < 9 and parts[1] != "0":
                    score += int(frames[i+1].split("/")[0])
        elif frames[i]:
            score += int(frames[i]) + int(frames[i+1].split("/")[0])
    return score