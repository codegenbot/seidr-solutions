def bowling_score(frames):
    score = 0
    i = 0
    
    while i < len(frames):
        if frames[i] == 'X':
            score += 10
            i += 1
            if i < len(frames) and frames[i] == 'X':
                score += 10
                i += 1
            elif i + 1 < len(frames):
                temp = ''
                while i < len(frames) and frames[i].isdigit():
                    temp += frames[i]
                    i += 1
                if '/' in temp:
                    temp = temp.replace('/', '')[0]
                    score += int(temp)
                else:
                    score += int(temp)
        elif '/' in frames[i:]:
            score += 10
            if i + 1 < len(frames) and frames[i+1].isdigit():
                score += int(frames[i+1])
            i += 2
        else:
            temp = ''
            while i < len(frames) and frames[i].isdigit():
                temp += frames[i]
                i += 1
            score += int(temp)
    
    return score