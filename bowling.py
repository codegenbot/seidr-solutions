```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10 + int(bowling_score(frames[i+1:i+3])[0])
            i += 2
        elif frames[i] == "/":
            score += 10 + int(frames[i+1])
            i += 2
        else:
            if len(frames) - i > 1 and frames[i+1] == "X" or frames[i+1] == "/":
                score += 10 + int(frames[i]) + int(bowling_score(frames[i+1:i+3])[0])
                i += 3
            else:
                score += 10 + int(frames[i]) + int(frames[i+1])
                i += 2
    return str(score),