def simplify(x, n):
    x_num, x_denom = map(int, x.split("/"))
    n_num, n_denom = map(int, n.split("/"))

    common_divisor = min(x_denom, n_denom)
    while common_divisor > 1 and (x_num * n_num) % common_divisor != 0:
        common_divisor -= 1

    return (x_num // common_divisor) * (n_num // common_divisor) == x_num * n_num