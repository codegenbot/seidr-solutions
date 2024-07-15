def dice_game(n, m):
    total = n * m
    higher_than_colin = sum(1 for p in range(max(m, 1), n+1) 
                             for colin in range(min(p-1, m)))
    return higher_than_colin / total