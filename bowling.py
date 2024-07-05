```
def bowling_score(frames):
    score = 0
    i = 0

    while i < len(frames):
        if frames[i] == 'X':
            score += 10
            i += 1
            if i + 1 < len(frames) and frames[i] == 'X':
                score += 10
                i += 1
            elif i + 2 < len(frames) and frames[i:i+2].isdigit():
                score += int(frames[i:i+2])
                i += 2
        elif '/' in frames[i:]:
            if frames[i] != '/':
                score += int(frames[i])
            score += 10 - int(frames[i+1:])
            i += 3
        else:
            temp = ''
            while i < len(frames) and frames[i].isdigit():
                temp += frames[i]
                i += 1
            score += int(temp)
    return score