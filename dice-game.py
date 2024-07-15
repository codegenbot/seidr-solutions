```
def dice_game(n, m):
    total = n * m
    higher_than_or_equal_to_colin = sum(1 for colin in range(m) 
                                         for p in range(max(colin+1, 1), n+1)) + (m-1)
    return higher_than_or_equal_to_colin / total