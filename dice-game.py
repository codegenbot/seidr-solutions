n = int(input())
m = int(input())

def dice_game(n, m):
    return (n - 1) / float(n + m - 1)

print(1 - dice_game(n, m))