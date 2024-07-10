```
def roll_higher(n, m):
    total_combinations = n * m
    higher_rolls = sum(1 for i in range(1, n+1) for j in range(m+1) if i > j)
    return higher_rolls / total_combinations