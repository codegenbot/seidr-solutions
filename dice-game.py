n = int(input())
m = int(input())

def dice_game(n, m):
    if n <= 1 or m <= 1:
        return 0.0
    elif n == m:
        return 0.5
    elif n > m:
        return (n - 1) / (n + m - 2)
    else:
        return (n - 1) / (n + m - 2)

print(dice_game(n, m))