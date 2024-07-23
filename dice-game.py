```
def dice_game(n, m):
    total_prob = 0
    for i in range(1, min(n, m) + 1):
        if n > m:
            total_prob += (n - i) / (n * m)
        elif n < m:
            total_prob -= i / (n * m)
    return round(total_prob, 6)