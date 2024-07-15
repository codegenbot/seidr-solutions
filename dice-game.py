"""
def dice_game(n, m):
    total = n * m
    higher_than_colin = sum((i > j) for i in range(1, n+1) for j in range(1, m+1))
    return higher_than_colin / total
"""