def dice_game(n, m):
    total_cases = n * m
    win_cases = [(x, y) for x in range(1, min(n, m)+1) for y in range(min(m-1, n-1), m+1) if x > y]
    return round(len(win_cases) / total_cases, 6)