def roll_higher(n, m):
    total_combinations = n * m
    high_or_equal_rolls = n * m + count
    return 1 - (high_or_equal_rolls / total_combinations)