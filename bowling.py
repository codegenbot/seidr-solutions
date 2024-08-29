def bowling_score(s):
    score = 0
    frames = [int(x) if x.isdigit() else 10 if x == 'X' else 10 - i for i, x in enumerate(s) if x != '-']
    for i in range(len(frames)):
        if frames[i] == 10:  
            score += 10 + (9 - i) * 10
        elif len(frames[i:]) >= 1 and sum(frames[i : i + 2]) <= 10:  
            score += sum(frames[i:i+2])
        else:  
            score += sum(frames[i:i+2])
    return score