def dice_game(n, m):
    total_cases = n * m
    win_cases = sum(1 for i in range(m-1) for j in range(i+1, n))
    return win_cases / total_cases