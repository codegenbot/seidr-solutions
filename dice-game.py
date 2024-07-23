```Python
def roll_dice(n, m):
    return sum((i - 1) / ((n ** i) * (m - i + 1)) for i in range(1, min(n, m)+1)) / (n * m)