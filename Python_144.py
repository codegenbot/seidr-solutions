def simplify(x, n):
    x_num, x_den = map(int, x.split("/"))
    n_num, n_den = map(int, n.split("/"))

    common_divisor = min(x_den, n_den)
    while common_divisor > 1 and (
        x_num % common_divisor != 0 or n_num % common_divisor != 0
    ):
        common_divisor -= 1

    return x_num // common_divisor == n_num // common_divisor