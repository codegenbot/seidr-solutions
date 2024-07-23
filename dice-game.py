def dice_game(n, m):
    total_prob = 0
    for i in range(1, m+1):
        prob = sum(min(j,n-1)+1 >= i+1 for j in range(i+1)) / (n * m)
        total_prob += prob
    return total_prob