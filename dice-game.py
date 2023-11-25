n = int(input())
m = int(input())

def dice_game_probability(n, m):
    return (n-1) / (n*m)

print(dice_game_probability(n, m))