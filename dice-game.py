```Python
def dice_game(n, m):
    total_rolls = n * m
    peter_wins = sum(range(1, n)) * m + (n - 1) * sum(range(1, m))
    return peter_wins / total_rolls