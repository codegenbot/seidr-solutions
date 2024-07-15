def dice_game(n, m):
    p_win = sum(1 for _ in range(min(m, n)) if n - _ > m - _ and (_ + 1) / (n * m))
    return sum(p_win) / (n * m)