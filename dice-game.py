def dice_game(n, m):
    total_outcomes = n * m
    peter_loss_count = sum(1 for i in range(1, n+1) for j in range(1, m+1) if i <= j)
    return (total_outcomes - peter_loss_count) / total_outcomes