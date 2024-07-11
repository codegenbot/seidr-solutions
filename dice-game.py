def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = 0
    for i in range(1, n):
        for j in range(1, min(i, m) + 1):
            if i > j or (i == j and m != j):  
                favorable_outcomes += 1
    return favorable_outcomes / total_outcomes