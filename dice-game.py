Here is the solution:

def dice_game(n, m):
    return (n-m)/(n*m) if n>m else (m-n)/(n*m)

# read input
n = int(input())
m = int(input())

# compute output
print("{:.2f}".format(dice_game(n,m)))