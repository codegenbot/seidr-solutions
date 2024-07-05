```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 30
            i += 1
        elif frames[i] == "/":
            score += 10 + int(frames[i - 1])
            i += 2
        else:
            first_roll = int(frames[i])
            if i + 1 < len(frames) and frames[i + 1] == "X" or frames[i + 1] == "/":
                score += 10 + first_roll
                i += 2
            elif i + 1 < len(frames):
                score += 10 + first_roll + int(frames[i + 1])
                i += 2
            else:
                score += 10 + first_roll
                i += 1
    return score