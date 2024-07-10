Here is the completed Python code:

def dice_game(n, m):
    return (n-1)/(n+m-2)

# Take input from user
n = int(input())
m = int(input())

print(dice_game(n, m))