```
def dice_game(n, m):
    total = n * m
    higher_than_colin = sum(1 for p in range(max(1, n-m+2), n+1) 
                             for colin in range(m))
    return higher_than_colin / total