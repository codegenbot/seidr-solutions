def bowling_score(frames):
    score = 0
    frames = [f for f in frames.split('/') if f]
    for i in range(10):
        if len(frames[i]) == 1:
            score += 10
            for j in range(i+1, 10):
                score += int(frames[j])
        elif len(frames[i]) == 2:
            score += int(frames[i])
            if i < 9:
                for j in range(i+1, 10):
                    if frames[j] != 'X':
                        score += int(frames[j].split(' ')[0])
                        break
        else:
            score += 10
    return score