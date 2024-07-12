def simplify(x, n):
    x_num, x_denom = map(int, [i for i in x.split('/') if i != ''])
    n_num, n_denom = map(int, [i for i in n.split('/') if i != ''])

    common_divisor = min(x_denom, n_denom)
    while common_divisor > 0 and x_denom % common_divisor == 0 and n_denom % common_divisor == 0:
        x_denom //= common_divisor
        n_denom //= common_divisor

    if x_num * n_denom == x_denom * n_num:
        return True
    else:
        return False