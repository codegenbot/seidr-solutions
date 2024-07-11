```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            score += 10
            i += 1
            if frames[i] == '/':
                score += int(frames[i+1])
                i += 1
            else:
                score += int(frames[i:i+2].replace('/',''))
            continue
        elif '/' in frames[i]:
            score += int(frames[i].replace('/',''))
            i += 1
            if frames[i] == 'X':
                score += 10
            else:
                score += int(frames[i])
            i += 1
        else:
            score += int(frames[i:i+2].replace('/',''))
        i += 2
    return score