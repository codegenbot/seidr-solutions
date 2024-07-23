```
def dice_game(n, m):
    total_prob = 0
    for i in range(1, min(m, n)):
        if i < m and i < n:
            total_prob += (n - i) * (m - i) / (n * m)
    total_prob += (n - m) ** 2 / (n * m)
    return round(total_prob,6)