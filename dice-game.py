```
def dice_game(n, m):
    total_probability = 0
    for i in range(1, min(n, m)):
        total_probability += (m - i) * ((n - 1) / n) * ((n - i) / (n * m))
    return total_probability