def simplify(x, n):
    x_num, x_denom = map(int, x.split('/'))
    n_num, n_denom = map(int, n.split('/'))

    gcd = lambda a, b: a if not b else gcd(b, a % b)
    greatest_common_divisor = gcd(gcd(x_num, x_denom), min(n_num, n_denom))
    
    return (x_num // greatest_common_divisor, x_denom // greatest_common_divisor) == (n_num // greatest_common_divisor, n_denom // greatest_common_divisor)