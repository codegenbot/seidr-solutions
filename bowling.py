def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames) - 1:
        if frames[i] == "X":
            score += 10
            i += 2
        elif frames[i] == "/":
            if frames[i+1] == "X":
                score += 10 + int(frames[i+2])
                i += 3
            else:
                score += int(frames[i+1]) + 10
                i += 2
        else:
            if frames[i] == "/":
                if frames[i+2] == "X":
                    score += 10 + int(frames[i+1]) + int(frames[i+3])
                    i += 4
                else:
                    score += int(frames[i+1]) + int(frames[i+2]) + 1
                    i += 3
            else:
                score += int(frames[i]) + int(frames[i+1])
                i += 2
    return score