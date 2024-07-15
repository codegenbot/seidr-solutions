def dice_game(n, m):
    p_win = sum(1/(i+1)*(n-i-1)/(n*m) for i in range(min(m,n)-1)) 
    return p_win