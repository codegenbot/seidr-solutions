def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            if i + 1 < len(frames) and frames[i+1].isdigit():
                score += int(frames[i:i+2])
                i += 1
            else:
                score += int(frames[i]) * 10
        elif frames[i] == 'X':
            if i+1 < len(frames) and frames[i+1] in ['X', '/']:
                score += 30
            else:
                score += 10 + int(frames[i+2:i+4])
        elif frames[i] == '/':
            score += 10 + int(frames[i+1])
        if frames[i] == 'X' and i < len(frames) - 3 and frames[i+2] == 'X':
            score += 30
        i += 1
    return score