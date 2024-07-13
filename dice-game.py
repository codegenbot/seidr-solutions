def dice_game(n, m):
    total = n*m
    peter_wins = sum(min(i, m) + 1 for i in range(1, min(m,n)+1)) + \
                 sum(max(m-1-j, 0) for j in range(n-m))
    return (peter_wins + 1.0) / total