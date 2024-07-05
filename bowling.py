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
            elif i + 1 < len(frames):
                score += int(frames[i:i+2]) 
                i += 2
        elif '/' in frames[i:]:
            first_roll = int(frames[i:].split('/')[0])
            if first_roll == 10:
                score += 10
                i += 3
            else:
                score += first_roll + int(frames[i:].split('/')[1])
                i += 3
        else:
            temp = ''
            while i < len(frames) and frames[i].isdigit():
                temp += frames[i]
                i += 1
            if len(temp) == 2 and temp[0] == '1' and temp[1] == '0':
                score += 10
                i += 2
            else:
                score += int(temp)
    
    return score