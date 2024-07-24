Here is the solution:

def dice_game(n, m):
    return (n - 1) / n * m / (n + m - 2) if n > m else (m - 1) / m * n / (n + m - 2)

n = int(input())
m = int(input())

print("{:.4f}".format(dice_game(n, m)))