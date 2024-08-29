```
def bowling_score(frames):
    score = 0
    frame_scores = []
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10
            if i + 1 < len(frames) and frames[i+1] in "/X":
                score += 10 + int(frames[i+2]) if i+2 < len(frames) else 10
            elif i+1 < len(frames):
                score += 10 + int(frames[i+1])
            frame_scores.append(10)
        elif frames[i] == "/":
            score += 10 + int(frames[i+1])
            frame_scores.append(10 + int(frames[i+1]))
            i += 1
        else:
            if len(frames) - i > 1 and frames[i+1] in "X/":
                score += 10 + int(frames[i]) + int(frames[i+1])
                frame_scores.append(10 + int(frames[i]) + int(frames[i+1]))
            elif len(frames) - i > 1:
                score += 10 + int(frames[i]) + int(frames[i+1])
                frame_scores.append(10 + int(frames[i]) + int(frames[i+1]))
            else:
                score += 10 + int(frames[i])
                frame_scores.append(10 + int(frames[i]))
        i += 2
    if len(frame_scores) == 10 and sum(frame_scores) == 300:
        return 300
    else:
        return score