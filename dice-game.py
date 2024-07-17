Here is the completed code:

def dice_game(n, m):
    return (n - 1) / (n * m - 1) if n > m else (m - 1) / (n * m - 1)

# Read input from user
n = int(input())
m = int(input())

print(dice_game(n, m))