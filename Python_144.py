def simplify(x, n):
    x_num, x_denom = map(int, [i for i in x.split('/')])
    n_num, n_denom = map(int, [i for i in n.split('/')])

    common_divisor = min(abs(x_num), abs(x_denom), abs(n_num), abs(n_denom))

    gcd = lambda a, b: b if not a else gcd(b % a, a)
    
    x_gcd = gcd(x_num, x_denom)
    n_gcd = gcd(n_num, n_denom)

    new_x_num, new_x_denom = x_num//x_gcd, x_denom//x_gcd
    new_n_num, new_n_denom = n_num//n_gcd, n_denom//n_gcd

    return str(new_x_num) + "/" + str(new_x_denom) == str(new_n_num) + "/" + str(new_n_denom)