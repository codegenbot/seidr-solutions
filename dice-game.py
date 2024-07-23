def dice_game(n, m):
    if n < m:
        return 0.0
    elif n == m:
        return 0.5
    else:
        return (m / (n * m - m)) + (1 / (n * m - m))


n = int(input())
m = int(input())

print(round(dice_game(n, m), 4))