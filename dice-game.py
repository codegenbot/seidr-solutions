def dice_game(n, m):
    total = n*m
    peters_wins = sum((n-i)*(m-(m-i)) for i in range(min(n,m)+1))
    return peters_wins / total