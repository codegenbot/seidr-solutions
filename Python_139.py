```
import math
def special_factorial(n):
    result = 1
    for i in range(n, 0, -1):
        result *= math.factorial(i)
    return result