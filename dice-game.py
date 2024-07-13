def dice_game(n, m):
    total_outcomes = n * m
    peter_wins = 0

    for i in range(1, min(n, m)):
        peter_wins += n - i

    return peter_wins / total_outcomes