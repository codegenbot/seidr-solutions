def bowling_score(frames):
    score = 0
    frames = [int(x) if x.isdigit() else ('10' if x == 'X' else ('-' + str(10 - int(x)) if x == '/' else '')) for x in frames]
    i = 0
    while i < len(frames):
        if frames[i] > 0:
            if i+1 >= len(frames) or frames[i+1] == 'X':
                score += frames[i]*1 + (10-frames[i])*(i+2<len(frames) and [True for x in range(i+3, len(frames)) if int(x) < 2].count(True))
            else:
                score += frames[i]*1 + frames[i+1]*1
            i += 2
        elif frames[i] == 'X':
            score += 10 + (frames[i+1:i+4].count('X')*10 if i+3 < len(frames) else 0)
            i += 4
        else:
            if frames[i] + frames[i+1] >= 10:
                score += 10
            else:
                score += int(frames[i]) * 1 + int(frames[i+1]) * 1
            i += 2
    return score