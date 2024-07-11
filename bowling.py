```
def bowling_score(frames):
    score = 0
    strike = False
    spare = False

    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            if len(frames[i * 2 : i * 2 + 2]) > 1:
                parts = frames[i * 2 : i * 2 + 2].split("/")
                score += sum(map(int, parts))
                spare = True
        else:
            score += sum(map(int, frames[i * 2 : i * 2 + 2].split("/")))
        
        if len(frames[i * 2 : i * 2 + 2]) > 1 and "/" not in frames[i * 2 : i * 2 + 2]:
            strike = True

    if spare:
        score += sum(map(int, frames[-2:]))
    
    if strike:
        score += sum(map(int, frames[-2:]))

    return score