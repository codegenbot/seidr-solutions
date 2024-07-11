```
import math
def modp(n: int, p: int):
    return int(math.pow(n, p) % p)