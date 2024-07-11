def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            if i+1 >= len(frames) or frames[i+1] != '-':
                score += 10
            else:
                score += 10
                i += 2
        elif '/' in frames[i:i+2]:
            parts = frames[i:i+2].split('/')
            score += int(parts[0]) + int(parts[1])
            i += 2
        else:
            if len(frames[i:i+2]) == 3: 
                score += 10 + int(frames[i+1])
                i += 2
            else:
                score += sum(int(part) for part in frames[i:i+2])
                i += 2

    return score