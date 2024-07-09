```
import math

def dice_game(n, m):
    numerator = 0
    denominator = n * m
    
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                numerator += 1
            elif i < j:
                numerator += m
            else:
                numerator += m - 1
                
    return numerator / denominator

n = int(input("Enter the number of sides for Peter's die: "))
m = int(input("Enter the number of sides for Colin's die: "))

print(dice_game(n, m))