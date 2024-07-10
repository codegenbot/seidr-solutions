```
def roll_higher(n, m):
    total_combinations = n * m
    higher_or_equal_rolls = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i != j:
                higher_or_equal_rolls += 1
    return (higher_or_equal_rolls - (n*m)) / total_combinations