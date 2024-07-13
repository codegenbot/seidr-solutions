def dice_game(n, m):
    total_combinations = n * m
    combinations_peter_wins = 0

    for i in range(m + 1):
        if i == 0 or i >= n:
            continue
        combinations_peter_wins += n - i

    return combinations_peter_wins / total_combinations