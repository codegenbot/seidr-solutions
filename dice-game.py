def dice_game(n, m):
    total = n * m
    higher_than_colin = 0
    for i in range(1, m):  
        higher_than_colin += (n - i) * (m - i)
    return higher_than_colin / total