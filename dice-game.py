```
def dice_game(n, m):
    if n == 1 or m == 1:
        return 0
    return sum(1/i/j for i in range(1, n) for j in range(1, m)) / (n*m) - sum(1/n for _ in range(m)) / (n*m)