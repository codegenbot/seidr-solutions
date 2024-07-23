```
def dice_game(n, m):
    if n == 1 or m == 1:
        return 0
    else:
        total_prob = 0
        for i in range(1, min(n, m)):
            total_prob += (1 / n) * (1 / m)
        return round(total_prob, 6)