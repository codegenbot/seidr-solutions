def roll_dice(n, m):
    p_favorable = sum(1 for _ in range(min(n-1, m)) if n - 1 > i)
    probability = p_favorable / (n * m)
    return probability