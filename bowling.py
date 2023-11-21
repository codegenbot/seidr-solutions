def calculate_score(bowls):
    bowls = bowls.replace('-', '0')
    frames = [int(b) if b.isdigit() else 10 for b in bowls]
    score = 0

    for i in range(10):
        start = i * 2

        if frames[start] == 10:
            score += frames[start] + frames[start + 1] + frames[start + 2]
        elif frames[start] + frames[start + 1] == 10:
            score += frames[start] + frames[start + 1] + frames[start + 2]
        else:
            score += frames[start] + frames[start + 1]
    
    return score