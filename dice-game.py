n = int(input("Enter the number of sides for Peter's die: "))
m = int(input("Enter the number of sides for Colin's die: "))
print(dice_game(n, m))


def dice_game(n, m):
    return (n - 1) * (m - 1) / (n * m)