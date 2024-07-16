def dice_game(n, m):
    peter_win_count = sum((n-j+1) for j in range(1, min(j+1, n)+1) for _ in range(m))
    total_outcomes = (n * m)
    return peter_win_count / float(total_outcomes)