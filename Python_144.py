```
def simplify(x, n):
    x_num, x_denom = map(int, [i for i in x.split('/')])
    n_num, n_denom = map(int, [i for i in n.split('/')])

    common_divisor = min(abs(x_num), abs(x_denom), abs(n_num), abs(n_denom))

    gcd = lambda a, b: b if not a else gcd(b % a, a)
    
    x_gcd = gcd(x_num, x_denom)
    n_gcd = gcd(n_num, n_denom)

    simplified_x = (x_num//common_divisor, x_denom//common_divisor)
    simplified_n = (n_num//common_divisor, n_denom//common_divisor)
    return simplified_x == simplified_n