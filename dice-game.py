n = int(input())
m = int(input())

def dice_game(n, m):
    if n <= 1 or m <= 1:
        return 0.0
    else:
        return (n - 1) / float(n) + (m - 1) / float(m) - ((n - 1) * (m - 1)) / float(n * m)

print(1 - dice_game(n, m))