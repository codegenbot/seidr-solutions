Here is the solution for the problem:

def dice_game(n, m):
    return 1 - (n + m) / (n * m)

print(dice_game(int(input()), int(input())))