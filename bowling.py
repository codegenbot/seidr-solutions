def bowling_score(frames):
    score = 0
    i = 0
    
    while i < len(frames):
        if frames[i] == 'X':
            score += 10
            i += 1
            if i + 1 < len(frames) and frames[i] == 'X':
                score += 20
                i += 2
            elif i + 1 < len(frames) and frames[i:i+2].isdigit():
                score += int(frames[i:i+2]) + 10
                i += 2
        elif '/' in frames[i:]:
            if frames[i] == 'X':
                score += 20
                i += 1
            else:
                first_roll = int(frames[i:].split('/')[0])
                second_roll = int(frames[i:].split('/')[1])
                if second_roll == 10:
                    score += 10 + first_roll
                else:
                    score += 10 + (first_roll + second_roll)
            i += 2
        else:
            temp = ''
            while i < len(frames) and frames[i].isdigit():
                temp += frames[i]
                i += 1
            score += int(temp)
    
    return score