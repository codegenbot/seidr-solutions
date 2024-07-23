def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2:i * 2 + 1]:
            strike = True
        elif len(frames[i * 2:i * 2 + 3]) == 2 or (len(frames[i * 2:i * 2 + 2]) == 3 and "X" not in frames[i * 2:i * 2 + 2]):
            if len(frames[i * 2:i * 2 + 3]) == 2:
                spare = int(frames[i * 2:i * 2 + 1])
            else:
                strike = True
        else:
            strike = False
            spare = int(frames[i * 2:i * 2 + 1])
        
        if strike:
            score += 10
        elif spare > 0:
            score += spare
    return score