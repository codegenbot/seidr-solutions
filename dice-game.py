```Python
def dice_game(n, m):
    total = n*m
    return sum(1 for i in range(max(m,n)+1) for j in range(min(i,m)+1) if i > j) / total