```python
import math

def dice_game(n, m):
    numerator = sum(1 for i in range(1, n+1) for j in range(1, m+1) if i > j)
    denominator = (n * m) - min(m, n)
    return numerator / denominator

n = int(input("Enter the number of sides for Peter's die: "))
m = int(input("Enter the number of sides for Colin's die: "))

print(dice_game(n, m))