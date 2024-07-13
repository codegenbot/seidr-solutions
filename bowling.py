```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            if i + 2 < len(frames):
                score += 10 + int(frames[i+1]) + int(frames[i+2])
            else:
                score += 10 + 10
            i += 3
        elif frames[i] == "/":
            score += 10
            if frames[i+1].isdigit():
                score += int(frames[i+1])
            i += 2
        else:
            frame_score = sum(int(x) for x in frames[i:i+2]) or 10
            score += frame_score
        i += 2
    return score