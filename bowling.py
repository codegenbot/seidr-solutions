```
def bowling_score(frames):
    score = 0
    frames = frames.split('-')
    for i in range(10):
        parts = frames[i].split("/")
        if len(parts) == 1:
            strike = True
        else:
            strike = False
        
        if i < 9: 
            if len(parts) > 1 and strike:
                score += 10
            elif strike:
                score += 10 + int(frames[i+1].split("/")[0]) + int(frames[i+2].split("/")[0])
            else:
                score += 10 + sum(map(int, parts))
        else:
            if len(parts) > 1 and strike:
                score += 20
            elif strike:
                score += 10 + int(frames[9].split("/")[0]) + int(frames[10].split("/")[0])
            else:
                score += 10 + sum(map(int, parts))
    return score