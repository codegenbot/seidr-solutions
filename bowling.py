```
def bowling_score(frames):
    score = 0
    frames = frames.split('-')
    for i in range(10):
        parts = frames[i].split("/")
        if len(parts) == 1: 
            if i < 8:
                score += 10
            elif i == 8 and (frames[i+1][0] == 'X' or frames[i+1][0] == '7'):
                score += 20
            else:
                parts = frames[i+1].split("/")
                score += 10 + int(parts[0])
        elif len(parts) > 1: 
            for part in parts:
                score += int(part)
        else: 
            score += sum(map(int, parts))
    return score