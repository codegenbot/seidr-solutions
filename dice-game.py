def roll_dice(n, m):
    common_rolls = sum(1 for i in range(min(n, m)))+1
    return (n - common_rolls) / n * (m - common_rolls) / m