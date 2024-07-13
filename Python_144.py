def simplify(x, n):
    x_num, x_denom = map(int, [i for i in x.split("/") if i])
    n_num, n_denom = map(int, [i for i in n.split("/") if i])

    def gcd(a, b):
        while b:
            a, b = b, a % b
        return a

    common_divisor = gcd(x_denom, n_denom)
    x_new_num = x_num // common_divisor
    x_new_denom = x_denom // common_divisor
    n_new_num = n_num // common_divisor
    n_new_denom = n_denom // common_divisor

    return (x_new_num, x_new_denom) == (n_new_num, n_new_denom)