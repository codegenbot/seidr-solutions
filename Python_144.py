```
import math


def simplify(x, n):
    x_num, x_denom = map(int, x.split("/"))
    n_num, n_denom = map(int, n.split("/"))

    result = (x_num * n_denom) // math.gcd(x_denom * n_num)
    reduced_result = (result, math.gcd(result, min(x_denom, n_denom)))

    if str(x) == f"{reduced_result[0]}/{reduced_result[1]}":
        return True
    else:
        return False