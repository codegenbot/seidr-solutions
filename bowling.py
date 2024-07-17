```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == 'X':
            score += 30
        elif frames[i] == '/':
            continue
        else:
            bonus = int(frames[i].split('/')[0])
            if i < 9 and frames[i+1] != 'X':
                bonus += int(frames[i].split('/')[1]) // 2
            score += bonus
    return score