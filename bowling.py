def get_bowling_score(rolls):
    frame = 1
    score = 0
    for i, c in enumerate(rolls):
        if c == 'X':
            score += 10
        elif c == '/':
            score += 10
        elif c == '-':
            pass
        if i % 2 == 1:
            score += frame
            frame += 1
    if c == 'X' or c == '/':
        score += 10 + (len(rolls) - i) * 2
    return score