```
import math

def simplify(x, n):
    x_parts = list(map(int, [0] + x.split("/")[1:]))
    n_parts = list(map(int, [0] + n.split("/")[1:]))

    if (x_parts[0] * n_parts[1]) % math.gcd(n_parts[1], x_parts[1]) == 0 and (
        n_parts[0] * x_parts[1]
    ) % math.gcd(x_parts[1], n_parts[1]) == 0:
        return True
    else:
        return False