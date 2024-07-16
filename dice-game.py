def dice_game(n, m):
    total_outcomes = n * m
    peter_win_count = sum((m - j) * (n - j) for j in range(1, min(m, n)+1))
    return peter_win_count / float(total_outcomes)