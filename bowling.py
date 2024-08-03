```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30
        elif frames[i] == '/':
            score += 10 + int(frames[i+1])
        else:
            score_frame = int(frames[i]) + int(frames[i+1])
            if score_frame < 10:
                score += score_frame
            else:
                score += 10 + (score_frame - 10)
    return score