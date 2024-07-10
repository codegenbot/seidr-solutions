def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            if frames[i+1].isdigit():
                score += int(frames[i]) + int(frames[i+1])
            else:
                score += int(frames[i]) * 10
        elif frames[i] == 'X':
            score += 30
        elif frames[i] == '/':
            score += 10
    return score