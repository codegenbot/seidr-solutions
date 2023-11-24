n = int(input())
m = int(input())

def dice_game(n, m):
    return (n-1) / (n+m-1)

print(dice_game(n, m))