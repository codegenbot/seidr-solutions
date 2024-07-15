```
def dice_game(n, m):
    total = n * m
    higher_than_colin = sum(1 for _ in range(m) if i > m for i in range(m+1, n+1))
    return higher_than_colin / total