n = int(input())
m = int(input())

def dice_game(n, m):
    if n <= 1 or m <= 1:
        return 0.0
    else:
        return 1 - (1 / n) ** (m - 1)

print(dice_game(n, m))