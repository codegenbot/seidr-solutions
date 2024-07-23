```
def dice_game(n, m):
    total_prob = 0
    for i in range(1, min(m,n)+1):
        total_prob += (n-i)/(n*m)
    return total_prob