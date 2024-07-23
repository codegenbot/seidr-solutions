```
def dice_game(n, m):
    total_prob = 0
    for i in range(m+1, n+1):
        total_prob += (n - i) * (m - (i-1)) / (n * m)
    return round(total_prob, 6)