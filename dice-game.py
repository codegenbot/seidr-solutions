def dice_game(n, m):
    peter_win_count = sum(1 for _ in range(m) if m+1 <= n and m+2 <= n)
    total_outcomes = (n * m)
    return peter_win_count / float(total_outcomes)