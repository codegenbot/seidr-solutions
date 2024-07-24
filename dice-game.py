Here is the solution:

def dice_game(n, m):
    return (n - 1) / (n * m)

# Read input from user
n = int(input())
m = int(input())

print(dice_game(n, m))