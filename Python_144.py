def simplify(x, n):
    x_num, x_denom = map(int, [i for i in x.split("/")])
    n_num, n_denom = map(int, [i for i in n.split("/")])

    common_divisor = abs(x_num // math.gcd(x_num, x_denom)) * abs(
        x_denom // math.gcd(x_num, x_denom)
    )

    return str(x_num // common_divisor) == str(n_num // common_divisor)