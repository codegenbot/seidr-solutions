```
import math
def is_simple_power(x, n):
    return round(n ** (int(math.log(x, n)))) == x