```
import math
def simplify(x, n):
    x_num, x_denom = map(int, x.split('/'))
    n_num, n_denom = map(int, n.split('/'))

    common_divisor = lambda a, b: math.gcd(a, b)
    gcd = common_divisor(x_num * n_denom, x_denom * n_num)

    return x_num // gcd, x_denom // gcd == 1, n_num // gcd, n_denom // gcd == 1