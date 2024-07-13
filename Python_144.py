def simplify(x, n):
    x_num, x_denom = map(int, x.split('/'))
    n_num, n_denom = map(int, n.split('/'))

    greatest_common_divisor = lambda a, b: a if not b else greatest_common_divisor(b, a % b)
    
    common_divisor = greatest_common_divisor(greatest_common_divisor(x_num, x_denom), greatest_common_divisor(n_num, n_denom))

    return (x_num // common_divisor, x_denom // common_divisor) == (n_num // common_divisor, n_denom // common_divisor)