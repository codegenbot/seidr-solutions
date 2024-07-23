n = int(input("Enter the number of sides on Peter's die: "))
m = int(input("Enter the number of sides on Colin's die: "))


def dice_game(n, m):
    return (n - 1) * (m - 1) / (n * m)


print(dice_game(n, m))