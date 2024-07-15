def dice_game(n, m):
    total = n * m
    higher_than_colin = sum(1 for colin in range(1, m+1) 
                             for p in range(m+1, n+1))
    return higher_than_colin / total