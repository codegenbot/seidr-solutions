```
def probability(n, m):
    if n < 1 or m < 1:
        return 0.0
    
    total_rolls = n * m
    peter_wins = sum(min(i, j) < i for i in range(1, n+1) for j in range(1, m+1))
    
    return peter_wins / total_rolls