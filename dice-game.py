```
def dice_game(n, m):
    total_outcomes = n * m
    peters_higher = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                peters_higher += 1
    return peters_higher / total_outcomes