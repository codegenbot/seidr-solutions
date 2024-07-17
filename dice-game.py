def dice_game(n, m):
    peter_hitting = 0
    for i in range(1, min(n, m) + 1):
        peter_hitting += n - i
    return peter_hitting / (n * m)