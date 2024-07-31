import math


def simplify(x, n):
    x_num, x_denom = map(int, x.split("/"))
    n_num, n_denom = map(int, n.split("/"))

    result = (x_num * n_denom) // math.gcd(x_denom * n_num)

    if result == 1:
        return f"({x})/({n})"
    else:
        return f"{result}/{math.gcd(x_denom, n_denom)}"