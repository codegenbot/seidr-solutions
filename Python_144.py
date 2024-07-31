import math

def simplify(x, n):
    x_num, x_denom = map(int, x.split('/'))
    n_num, n_denom = map(int, n.split('/'))

    return (x_num * n_denom) // math.gcd(x_denom * n_num) == 1