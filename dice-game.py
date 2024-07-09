```
import math
from fractions import Fraction

def dice_game(n, m):
    numerator = sum(min(i, j) for i in range(1, n+1) for j in range(1, m+1)) - min(m, n)
    denominator = (n * m)
    return Fraction(numerator).limit_denominator().num / denominator

n = int(input("Enter the number of sides for Peter's die: "))
m = int(input("Enter the number of sides for Colin's die: "))

print(dice_game(n, m))