```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            if i < 9:
                if frames[i + 1] == "/":
                    score += 30
                else:
                    score += 10 + int(frames[i + 1]) + (10 + int(frames[i + 1])) if i < 8 else 10 + int(frames[i + 1])
            else:
                score += 10 + int(frames[i + 1]) + (10 + int(frames[i + 2])) if i < 8 else 10 + int(frames[i + 1])
        elif frames[i] == "/":
            score += 10 + int(frames[i + 1])
        else:
            score += 10 + int(frames[i]) + int(frames[i + 1])
    return score