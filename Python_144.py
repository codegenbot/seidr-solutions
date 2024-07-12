def simplify(x, n):
    x_num, x_denom = map(int, [i for i in x.split('/')])
    n_num, n_denom = map(int, [i for i in n.split('/')])

    common_divisor = min(abs(x_num), abs(x_denom), abs(n_num), abs(n_denom))

    gcd = lambda a, b: b if not a else gcd(b % a, a)
    
    x_gcd = gcd(x_num, x_denom)
    n_gcd = gcd(n_num, n_denom)

    return str(x_num//x_gcd) == str(n_num//n_gcd)