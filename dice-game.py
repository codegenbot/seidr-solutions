```
def dice_game(n, m):
    if n < m:
        return 0.0
    elif n == m:
        return 0.5
    else:
        return sum(1.0 / m for _ in range(m+1, n)) / (n / (n * m))