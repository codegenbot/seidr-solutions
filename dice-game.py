def dice_game(n, m):
    num_outcomes = n * m
    strictly_higher_count = 0
    for i in range(1, min(n, m) + 1):
        strictly_higher_count += (n - i) * m + i * (n - m)
    return strictly_higher_count / num_outcomes