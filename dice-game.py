import math

def dice_game(n, m):
    numerator = sum(min(i, j) < i for i in range(1, n+1) for j in range(1, min(m, i)+1))
    denominator = n * m
    return 1 - (numerator / denominator)

n = int(input("Enter the number of sides for Peter's die: "))
m = int(input("Enter the number of sides for Colin's die: "))

print(dice_game(n, m))