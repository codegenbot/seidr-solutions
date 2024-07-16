def bowling_score(bowling):
    score = 0
    for i in range(10):
        if bowling[i * 2] == "X":
            score += 30
        elif bowling[i * 2 : i * 2 + 2].count("X") >= 1:
            score += min(int(bowling[i * 2]), 10) * 10 + max(
                int(bowling[i * 2 : i * 2 + 1]) - int(bowling[i * 2]), 0
            )
        else:
            score += sum(map(int, bowling[i * 2 : i * 2 + 2]))
    return score