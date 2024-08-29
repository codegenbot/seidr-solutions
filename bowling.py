```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            if i < 9:
                i += 1
                score += 10
                bonus = int(frames[i])
                score += bonus
            else:
                score += 10 + 10
        elif frames[i] == "/":
            score += 10
            i += 1
            if i < len(frames) and frames[i] != "X" and frames[i] != "/":
                score += int(frames[i])
        else:
            first = int(frames[i])
            if i < 8 and frames[i + 1] == "X":
                i += 2
                score += 10
                score += 10 + first
            elif i < 8 and frames[i + 1] == "/":
                score += first
                i += 2
                score += int(frames[i])
            else:
                if i < len(frames) - 1 and frames[i + 1] != "X" and frames[i + 1] != "/":
                    second = int(frames[i + 1])
                    score += first + second
                else:
                    score += first
        i += 1
    return score