def dice_game(n, m):
    total_outcomes = n * m
    peter_loss_count = sum(1 for i in range(m+1) for j in range(1, i) if j <= n)
    return (total_outcomes - peter_loss_count) / float(total_outcomes)