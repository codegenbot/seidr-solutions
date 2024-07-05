```Python
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10
            i += 1
            if i < len(frames) and frames[i] in ["X", "/"]:
                score += 10
                i += 1
            else:
                score += int(frames[i])
                i += 1
        elif frames[i] == "/":
            score += 5
            i += 1
            if i < len(frames) and frames[i] in ["X", "/"]:
                score += 10 - int(frames[i-1])
                i += 1
            else:
                score += int(frames[i])
        else:
            first_roll = int(frames[i])
            i += 1
            if i < len(frames):
                second_roll = int(frames[i])
                i += 1
            else:
                second_roll = 0
            if frames[i-1] == "X" or (frames[i-1] != "/" and frames[i-2] == "/"):
                score += first_roll + second_roll
            else:
                score += first_roll + second_roll

    return score