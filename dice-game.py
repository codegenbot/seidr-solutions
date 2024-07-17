Here is the Python solution:

def dice_game(n, m):
    return 1 - (n + m - 2) / (n * m) if n > m else 1 - (m + n - 2) / (n * m)

print(dice_game(int(input()), int(input())))