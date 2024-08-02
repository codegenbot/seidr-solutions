```
def simplify(x, n):
    x_num, x_den = map(int, x.split('/'))
    n_num, n_den = map(int, n.split('/'))
    
    def gcd(a, b):
        while b:
            a, b = b, a % b
        return a
    
    common_divisor = gcd(x_den, n_den)
    
    return (x_num // common_divisor) * (n_num // common_divisor) == x_num * n_num // common_divisor