```
def roll_dice(n, m):
    p_total = n
    c_total = m

    peter_rolls_at_least_as_high = sum(min(i + 1, j) for i in range(1, n + 1) for j in range(1, m + 1))

    return peter_rolls_at_least_as_high / (p_total * c_total)