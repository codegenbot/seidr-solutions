```
def dice_game(n, m):
    total = n * m
    greater = 0
    
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                greater += 1
                
    return greater / total