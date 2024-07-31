def simplify(x, n):
    x_num, x_den = map(int, x.split("/"))
    n_num, n_den = map(int, n.split("/"))

    common_divisor = max(x_num, x_den)
    while common_divisor > 1 and (
        x_num % common_divisor != 0 or x_den % common_divisor != 0
    ):
        common_divisor -= 1

    return int(x_num / common_divisor) == int(n_num / common_divisor)