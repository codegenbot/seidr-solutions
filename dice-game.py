def dice_game(n, m):
    total_prob = 0
    for i in range(1, min(n,m)+1):
        total_prob += (n-i)/(n*m)
    for i in range(max(1,m-n+1), m+1):
        total_prob += (m-i)/(n*m)
    return round(total_prob,6)