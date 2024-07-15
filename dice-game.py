```
def dice_game(n, m):
    total = n * m
    higher_than_colin = sum(1 for i in range(m+1, n+m+1) for j in range(1, m))
    return higher_than_colin / total