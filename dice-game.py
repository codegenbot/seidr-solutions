def dice_game(n, m):
    total_prob = 0
    for i in range(1, min(n,m)+1):
        total_prob += (n-i)/(n*m)
    for i in range(min(m,n-m+2), m+1):
        total_prob += (m-i)/(n*m)
    return total_prob