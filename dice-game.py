def dice_game(n, m):
    total_outcomes = n * m
    p_counter = 0
    for i in range(1, min(n, m) + 1):
        for j in range(1, min(n, m) + 1):
            if i > j:
                p_counter += 1
    return p_counter / total_outcomes