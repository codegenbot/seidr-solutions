def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if i > 0 and frames[i-1] == 'X':
                score += 30 + int(frames[9])
            else:
                score += 30
        elif frames[i] == '/':
            if i < len(frames) - 1:
                score += 10 + int(frames[i+1]) + int(frames[i+2])
            else:
                score += 10 + int(frames[i+1])
        else:
            score += int(frames[i]) + int(frames[i+1])
    return score