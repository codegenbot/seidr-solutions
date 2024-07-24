def simplify(x, n):
    x_num, x_denom = map(int, x.split("/"))
    n_num, n_denom = map(int, n.split("/"))

    common_divisor = min(x_denom, n_denom)
    while common_divisor > 1 and (
        (x_num * n_num) % common_divisor != 0 or (x_denom // common_divisor) != x_denom
    ):
        common_divisor -= 1

    simplified_x_num = x_num // common_divisor
    simplified_x_denom = x_denom // common_divisor

    return f"{simplified_x_num}/{simplified_x_denom}"