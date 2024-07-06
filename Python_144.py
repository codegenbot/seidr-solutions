def simplify(x, n):
    x_num, x_denom = map(int, x.split("/"))
    n_num, n_denom = map(int, n.split("/"))

    common_divisor = max(x_num, x_denom, n_num, n_denom)

    return (x_num // common_divisor) * (n_num // common_divisor) == (
        x_denom // common_divisor
    ) * (n_denom // common_divisor)