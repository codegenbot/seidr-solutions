def dice_game(n, m):
    if n > m:
        favorable = sum(1 for i in range(m+1) for j in range(i+1, n+1))
        total = n * m
    else:
        favorable = sum(min(k, m) for k in range(1, min(n, m)+1)) 
        total = (n if n <= m else m) ** 2

    return favorable / total