```
def roll_higher(n, m):
    total_combinations = n * m
    higher_rolls = 0
    for i in range(1, min(n+1, m+1)):
        higher_rolls += (n - i) * (m - i + 1)
    return higher_rolls / total_combinations