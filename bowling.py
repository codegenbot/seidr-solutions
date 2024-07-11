```
def bowling_score(frames):
    score = 0
    frames = frames.split('-')
    for i in range(len(frames)):
        parts = frames[i].split("/")
        if len(parts) == 1:
            score += 10
        elif parts[0] == 'X':
            if i < 9: 
                score += 10
            else:
                if i + 2 < len(frames):
                    if int(frames[i+1]) + int(frames[i+2]) > 10:
                        score += 15
                    else:
                        score += 10 + int(frames[i+1]) + int(frames[i+2])
                else: 
                    score += 10 + int(frames[-1])
        elif len(parts) == 2 and parts[0] != 'X':
            score += sum(map(int, parts))
        else:
            for part in parts:
                score += int(part)
    return score