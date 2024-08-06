Here is the solution:

def dice_game(n, m):
    return 1 - n / (n + m) if n > m else 1 - m / (m + n)

# Read input from user
n = int(input())
m = int(input())

print(dice_game(n, m))