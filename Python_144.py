```
def simplify(x, n):
    x_num, x_denom = map(int, x.split('/'))
    n_num, n_denom = map(int, n.split('/'))

    def gcd(a, b):
        while b:
            a, b = b, a % b
        return a

    common_divisor = gcd(gcd(x_num, x_denom), gcd(n_num, n_denom))
    return (x_num // common_divisor, x_denom // common_divisor) != (x_num, x_denom)