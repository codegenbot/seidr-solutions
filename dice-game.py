Here's the solution:

def dice_game(n, m):
    return (n-m)/(n+m) if n > m else (m-n)/(m+n)

# Read input from user
n = int(input())
m = int(input())

print(dice_game(n, m))