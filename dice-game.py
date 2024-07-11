```
def dice_game(n, m):
    total_combinations = n * m
    peter_wins = 0

    for i in range(1, min(n, m) + 1):
        if i < m - i:
            peter_wins += 1
        elif i == m - i:
            peter_wins += (m - i)

    return peter_wins / total_combinations