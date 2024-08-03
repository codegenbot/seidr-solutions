def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = 0

    for i in range(m, n * m):
        if math.floor((i + 1) / n) == math.floor(i / m):
            continue
        favorable_outcomes += 1

    return favorable_outcomes / total_outcomes