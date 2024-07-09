import math

def dice_game(n, m):
    numerator = sum(1 for i in range(min(n, m)+1) for _ in range(max(n-m+1, 0)))
    denominator = n * m
    return numerator / denominator

n = int(input("Enter the number of sides for Peter's die: "))
m = int(input("Enter the number of sides for Colin's die: "))

print(dice_game(n, m))