```
def dice_game(n, m):
    p_win = sum((i < j) for i in range(1, n+1) for j in range(1, min(m,n)+1) if i < j)
    return p_win / (n * m)