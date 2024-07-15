def dice_game(n, m):
    p_win = sum((i+1)/(n*m) for i in range(min(m-1,n-1)))
    return (p_win) / (min(n,m)*max(1,(n-m)+1))