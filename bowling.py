def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            score += 10
            i += 1
        elif frames[i].isdigit() and frames[i+1] == '/':
            score += 10
            i += 2
        else:
            num = int(frames[i])
            i += 1
            if i < len(frames) and frames[i] == '-':
                i += 1
            if i < len(frames) and frames[i].isdigit():
                num += int(frames[i])
                i += 1
            score += num
    return score