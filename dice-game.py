def dice_game(n, m):
    successful = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                successful += 1
    return successful / (n * m)