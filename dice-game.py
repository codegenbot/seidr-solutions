def dice_game(n, m):
    return min(n, m) / max(n, m)


n = int(input())
m = int(input())

print(dice_game(n, m))