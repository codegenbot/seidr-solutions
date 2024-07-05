```
def bowling_score(frames):
    score = 0
    i = 0
    frames += ' ' #add a space at the end of the string for easier parsing

    while i < len(frames):
        if frames[i] == 'X':
            score += 10
            i += 1
            if i < len(frames) and frames[i] == 'X':
                score += 10
                i += 1
            elif i + 1 < len(frames) and frames[i:i+2].isdigit():
                score += int(frames[i:i+2])
                i += 2
        elif '/' in frames[i:]:
            if frames[i] == 'X':
                score += 10
                i += 1
            else:
                score += int(frames[i].split('/')[0]) + int(frames[i].split('/')[1])
            i += 2
        else:
            temp = ''
            while i < len(frames) and frames[i].isdigit():
                temp += frames[i]
                i += 1
            if len(temp) == 1: 
                score += int(temp)
            elif len(temp) == 2:
                score += int(temp)
            else:
                score += int(temp[0]) + int(temp[1])

    return score