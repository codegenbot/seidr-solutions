```
def dice_game(n, m):
    if n == 1 or m == 1:
        return 0.0
    else:
        total = n * m
        peter_higher = (n - 1) * m + n
        return peter_higher / total