def simplify(x, n):
    x_num, x_denom = map(int, [i for i in x.split('/')])
    n_num, n_denom = map(int, [i for i in n.split('/')])

    common_divisor = min(abs(x_num), abs(x_denom), abs(n_num), abs(n_denom))
    
    return x_num//common_divisor == n_num//common_divisor and x_denom//common_divisor == n_denom//common_divisor